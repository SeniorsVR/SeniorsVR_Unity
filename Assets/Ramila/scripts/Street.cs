using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Street : MonoBehaviour {
    public GameObject trafficLight;
    public List<GameObject> semaforos;
    public float redTime, greenTime;
    public Semaforo semaforo;
    void Start() {
        //trafficLight = Instantiate (trafficLight, new Vector3(5, 0, 0), Quaternion.identity);
        //GameObject duplicate = Instantiate(trafficLight, new Vector3(8, 0, 0), Quaternion.identity);
        //semaforos = new List<GameObject>();
        //semaforos.Add(trafficLight);
        //semaforos.Add(duplicate);
        //redTime = 10.0f; greenTime = 15.0f;
        //
        //object[] tempStorage = new object[3];
        //tempStorage[0] = false; tempStorage[1] = redTime; tempStorage[2] = greenTime;
        //semaforos[0].SendMessage("setTrafficLight", tempStorage);
        //tempStorage[0] = true; tempStorage[1] = greenTime; tempStorage[2] = redTime;
        //semaforos[1].SendMessage("setTrafficLight", tempStorage);
    }

    void Update() {
        
    }
}
