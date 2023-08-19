using UnityEngine;

public class origen : MonoBehaviour
{
    public delegate void End();
    public static event End endEvent;

    [SerializeField]
    private GameObject nextPointInRoute;
    int count;
    void Start(){
        count = 0;
    }

    private void OnTriggerEnter(Collider other) {
        if(other.gameObject.CompareTag("Player")){
            if(endEvent != null){
                count++;
                if(count>1){
                    endEvent();
                }
            }
        }
    }
}
