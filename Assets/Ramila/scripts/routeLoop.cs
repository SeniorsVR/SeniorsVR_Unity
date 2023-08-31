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
    public int desfase;
    public GameObject body;

    public List<Color> colores;
    
    private bool isMoving;
    // Start is called before the first frame update
    void Start()
    {
        body.GetComponent<MeshRenderer>().material.SetColor("_BaseColor", colores[Random.Range(0, colores.Count)]);
        first = true;
        target = 0 + desfase;
        currentPoint = 0;
        isMoving = false;
        points = new List<Transform>();
    }

    // Update is called once per frame
    void Update()
    {
        if(isMoving){
            if(target==0){
                route[route.Count-1].canTransit = true;
            }else{
                route[target-1].canTransit = true;
            }
            if(route[target].isCrossRoad){
                if(!route[target].isStop){
                    route[target].canTransit = false;
                }
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
                     if(target==0){
                        route[route.Count-1].canTransit = true;
                    }else{
                        route[target-1].canTransit = true;
                    }
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
                case 5:
                    points = nextTransit.points5;
                    break;
                case 6:
                    points = nextTransit.points6;
                    break;
                case 7:
                    points = nextTransit.points7;
                    break;
                case 8:
                    points = nextTransit.points8;
                    break;
                }
                if(first){
                    transform.position = points[0].position;
                    transform.rotation = points[0].rotation;
                    first = false;
                }
                currentPoint = 0;
            }else{
                if(target==0){
                    if(!route[route.Count-1].isStop){
                        route[route.Count-1].canTransit = false;
                    }else{
                        route[route.Count-2].canTransit = false;
                    }
                }else{
                    if(!route[target-1].isStop){
                        route[target-1].canTransit = false;
                    }else{
                        route[target-2].canTransit = false;
                    }
                }
            }
        }
    }
}
