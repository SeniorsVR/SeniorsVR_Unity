using UnityEngine;

public class routeMarker : MonoBehaviour
{
    private Vector3 targetPosition;
    public GameObject arrow;
    private Vector3 lookAt;
    public Transform cameraTransform;
    public float arrowSpeed;
    private Vector3 targetVector;
    bool back;
    public delegate void EndSim();
    public static event EndSim endSimEvent;
    private void OnEnable() {
        guia.nextTarget += SetTarget;
        origen.endEvent += EndSimulation;
        lookAt = Vector3.forward;
        targetVector = Vector3.forward;
        back = false;
    }

    private void OnDisable() {
        guia.nextTarget -= SetTarget;
        origen.endEvent -= EndSimulation;
    }
    void Update()
    {
        targetVector.Set(targetPosition.x,arrow.transform.position.y,targetPosition.z);
        lookAt = Vector3.Lerp(lookAt,targetVector,arrowSpeed*Time.deltaTime);
        arrow.transform.LookAt(lookAt);
    }

    void SetTarget(Vector3 position){
        if(position.magnitude==0.0f){
           arrow.SetActive(false); 
           back = true;
        }
        targetPosition = position;
        Debug.Log(position);
    }

    void EndSimulation(){
        if(back){
            if(endSimEvent != null){
                endSimEvent();
            }
        }
    }
}
