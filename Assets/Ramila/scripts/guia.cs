using UnityEngine;

public class guia : MonoBehaviour
{
    public delegate void PointTo(Vector3 position);
    public static event PointTo nextTarget;

    [SerializeField]
    private GameObject nextPointInRoute;
    void Start(){
    }

    private void OnTriggerEnter(Collider other) {
        if(other.gameObject.CompareTag("Player")){
            if(nextTarget != null){
                if(nextPointInRoute){
                    nextTarget(nextPointInRoute.transform.position);
                }else{
                    nextTarget(Vector3.zero);
                }
            }
        }
    }
}
