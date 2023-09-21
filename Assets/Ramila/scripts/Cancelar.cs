using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;
using nico;

public class Cancelar : MonoBehaviour
{
    // Update is called once per frame
    void Update()
    {
        if(Input.touchCount>0 || Input.GetKey(KeyCode.Escape)){
            TestManager.Instance.cancelTest();
        }
    }
}
