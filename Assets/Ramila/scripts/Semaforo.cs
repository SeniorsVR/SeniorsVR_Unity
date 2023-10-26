using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Semaforo : MonoBehaviour {
    public GameObject redLight, greenLight, yellowLight;
    public float constRedTime, constGreenTime;
    private float redTime, greenTime, blinkingTime, blinkingRatio;
    public bool isClock;
    public Transit cruce;
    public bool state;
    public bool esPeatonal;
    void Start() {
        blinkingTime = 6.0f;
        blinkingRatio = 0.5f;
        object[] items = new object[3];
        items[0] = state; items[1] = constGreenTime; items[2] = constRedTime;
        setTrafficLight(items);
    }

    void Update() {
        if (!state) {
            redTime -= Time.deltaTime;
            if (redTime <= 0) {
                redTime = 0;
                greenTime = constGreenTime;
                state = true; // en verde
                if(isClock){
                    cruce.canTransit = true;
                }
                redLight.GetComponent<MeshRenderer>().material.SetColor("_BaseColor", Color.black);
                greenLight.GetComponent<MeshRenderer>().material.SetColor("_BaseColor", Color.green);
            }
        } else {
            greenTime -= Time.deltaTime;
            if (greenTime <= blinkingTime) {
                if(esPeatonal){
                    blinkingRatio -= Time.deltaTime;
                    if (0 < blinkingRatio && blinkingRatio <= 0.5) {
                        greenLight.GetComponent<MeshRenderer>().material.SetColor("_BaseColor", Color.black);
                    } else if (blinkingRatio <= 0 && -0.5 <= blinkingRatio) {
                        greenLight.GetComponent<MeshRenderer>().material.SetColor("_BaseColor", Color.green);
                    } else if (blinkingRatio < -0.5) {
                        blinkingRatio = 0.5f;
                    }
                }else{
                    greenLight.GetComponent<MeshRenderer>().material.SetColor("_BaseColor", Color.black);
                    yellowLight.GetComponent<MeshRenderer>().material.SetColor("_BaseColor", Color.yellow);
                }
            }
            if (greenTime <= 0) {
                redTime = constRedTime;
                greenTime = 0;
                state = false; // en rojo
                if(isClock){
                    cruce.canTransit = false;
                }
                blinkingRatio = 0.5f;
                redLight.GetComponent<MeshRenderer>().material.SetColor("_BaseColor", Color.red);
                greenLight.GetComponent<MeshRenderer>().material.SetColor("_BaseColor", Color.black);
                if(!esPeatonal){
                    yellowLight.GetComponent<MeshRenderer>().material.SetColor("_BaseColor", Color.black);
                }
            }
        }
    }

    public void setTrafficLight(object[] start) {
        constRedTime = (float) start[1];
        constGreenTime = (float) start[2];
        if ((bool) start[0]) { // en verde
            state = true;
            if(isClock){
                cruce.canTransit = true;
            }
            redTime = 0.0f;
            greenTime = constGreenTime;
            redLight.GetComponent<MeshRenderer>().material.SetColor("_BaseColor", Color.black);
            greenLight.GetComponent<MeshRenderer>().material.SetColor("_BaseColor", Color.green);
        } else { // en rojo
            state = false;
            if(isClock){
                cruce.canTransit = false;
            }
            redTime = constRedTime;
            greenTime = 0.0f;
            redLight.GetComponent<MeshRenderer>().material.SetColor("_BaseColor", Color.red);
            greenLight.GetComponent<MeshRenderer>().material.SetColor("_BaseColor", Color.black);
        }
    }
}
