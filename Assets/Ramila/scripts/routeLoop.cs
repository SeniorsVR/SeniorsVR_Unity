using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class routeLoop : MonoBehaviour
{
    [SerializeField]
    List<Transit> route;
    [SerializeField]
    List<int> routeIndex;

    private int target;
    private Transit nextTransit;
    public List<Transform> points;
    private int currentPoint;
    public float speed;
    public float movementBuffer;
    public float rotationSpeed;
    bool first;
    
    private bool isMoving;
    // Start is called before the first frame update
    void Start()
    {
        first = true;
        target = 0;
        currentPoint = 0;
        isMoving = false;
        points = new List<Transform>();
        nextTransit = new Transit();
        
    }

    // Update is called once per frame
    void Update()
    {
        if(isMoving){
            if(route[target].isCrossRoad){
                transform.position = Vector3.MoveTowards(transform.position,points[currentPoint].position, Time.deltaTime * speed/2);
                transform.rotation = Quaternion.Lerp(transform.rotation, points[currentPoint].rotation, Time.deltaTime * rotationSpeed);
            }else{
                transform.position = Vector3.MoveTowards(transform.position,points[currentPoint].position, Time.deltaTime * speed);
                transform.rotation = Quaternion.Lerp(transform.rotation, points[currentPoint].rotation, Time.deltaTime * rotationSpeed);
            }
            if((transform.position-points[currentPoint].position).magnitude < movementBuffer){
                currentPoint++;
                if(currentPoint >= points.Count){
                    currentPoint = 0;
                    target++;
                    if(target >= route.Count){
                        target = 0;
                    }
                    isMoving = false;
                }
            }
        }else{
            nextTransit = route[target];
            if(nextTransit.canTransit){
                isMoving = true;
                switch(routeIndex[target]) {
                case 1:
                    points = nextTransit.points;
                    break;
                case 2:
                    points = nextTransit.points2;
                    break;
                case 3:
                    points = nextTransit.points3;
                    break;
                case 4:
                    points = nextTransit.points4;
                    break;
                }
                if(first){
                    transform.position = points[0].position;
                    transform.rotation = points[0].rotation;
                    first = false;
                }
                currentPoint = 0;
            }
        }
    }
}
