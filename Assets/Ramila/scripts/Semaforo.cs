using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Semaforo : MonoBehaviour {
    public GameObject block, redLight, greenLight, stick;
    public float constRedTime, constGreenTime;
    private float redTime, greenTime, blinkingTime, blinkingRatio;
    public bool state;
    void Start() {
        blinkingTime = 6.0f;
        blinkingRatio = 0.5f;
        block.GetComponent<MeshRenderer>().material.SetColor("_Color", Color.black);
        stick.GetComponent<MeshRenderer>().material.SetColor("_Color", Color.black);
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
                redLight.GetComponent<MeshRenderer>().material.SetColor("_Color", Color.white);
                greenLight.GetComponent<MeshRenderer>().material.SetColor("_Color", Color.green);
            }
        } else {
            greenTime -= Time.deltaTime;
            if (greenTime <= blinkingTime) {
                blinkingRatio -= Time.deltaTime;
                if (0 < blinkingRatio && blinkingRatio <= 0.5) {
                    greenLight.GetComponent<MeshRenderer>().material.SetColor("_Color", Color.white);
                } else if (blinkingRatio <= 0 && -0.5 <= blinkingRatio) {
                    greenLight.GetComponent<MeshRenderer>().material.SetColor("_Color", Color.green);
                } else if (blinkingRatio < -0.5) {
                    blinkingRatio = 0.5f;
                }
            }
            if (greenTime <= 0) {
                redTime = constRedTime;
                greenTime = 0;
                state = false; // en rojo
                blinkingRatio = 0.5f;
                redLight.GetComponent<MeshRenderer>().material.SetColor("_Color", Color.red);
                greenLight.GetComponent<MeshRenderer>().material.SetColor("_Color", Color.white);
            }
        }
    }

    public void setTrafficLight(object[] start) {
        constRedTime = (float) start[1];
        constGreenTime = (float) start[2];
        if ((bool) start[0]) { // en verde
            state = true;
            redTime = 0.0f;
            greenTime = constGreenTime;
            redLight.GetComponent<MeshRenderer>().material.SetColor("_Color", Color.white);
            greenLight.GetComponent<MeshRenderer>().material.SetColor("_Color", Color.green);
        } else { // en rojo
            state = false;
            redTime = constRedTime;
            greenTime = 0.0f;
            redLight.GetComponent<MeshRenderer>().material.SetColor("_Color", Color.red);
            greenLight.GetComponent<MeshRenderer>().material.SetColor("_Color", Color.white);
        }
    }
}
