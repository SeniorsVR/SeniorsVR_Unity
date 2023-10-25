using UnityEngine;
using nico;

public class Cancelar : MonoBehaviour
{
    private float timer;

    private void Start() {
        timer = 0;
    } 
    // Update is called once per frame
    void Update()
    {
        if(Input.touchCount>0 || Input.GetKey(KeyCode.Escape)){
            timer+= Time.deltaTime;
        }else{
            timer = 0;
        }

        if(timer>2){
            timer = 0;
            TestManager.Instance.cancelTest();
        }
    }
}
