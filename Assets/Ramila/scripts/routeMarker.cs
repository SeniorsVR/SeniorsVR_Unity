using UnityEngine;

public class routeMarker : MonoBehaviour
{
    private Vector3 targetPosition;
    private Vector3 oldTargetPosition;

    public GameObject arrow;
    private Vector3 lookAt;
    public Transform cameraTransform;
    public float arrowSpeed;
    private Vector3 targetVector;
    public bool back;
    public delegate void EndSim();
    public static event EndSim endSimEvent;
    private void OnEnable() {
        guia.nextTarget += SetTarget;
        origen.endEvent += EndSimulation;
        lookAt = Vector3.forward;
        oldTargetPosition = lookAt;
        targetVector = Vector3.forward;
        back = false;
    }

    private void OnDisable() {
        guia.nextTarget -= SetTarget;
        origen.endEvent -= EndSimulation;
    }
    void Update()
    {   
        if (false && oldTargetPosition.magnitude > 0)
        {
            Vector3 direction = targetPosition - oldTargetPosition;
            Quaternion angle = Quaternion.LookRotation(direction);
            arrow.transform.rotation = Quaternion.Lerp(arrow.transform.rotation, angle, Time.deltaTime*5f);
        }
        else
        {
            targetVector.Set(targetPosition.x, arrow.transform.position.y, targetPosition.z);
            lookAt = Vector3.Lerp(lookAt, targetVector, arrowSpeed * Time.deltaTime);
            arrow.transform.LookAt(lookAt);
        }


    }

    void SetTarget(Vector3 position){
        if(position.magnitude==0.0f){
           arrow.SetActive(false); 
           back = true;
        }
        oldTargetPosition = targetPosition;
        targetPosition = position;
        //Debug.Log(position);
    }

    void EndSimulation(){
        if(back){
            if (nico.TestManager.enVuelta)
            {
                if (endSimEvent != null)
                {
                    endSimEvent();
                }
            }
        }
    }
}
