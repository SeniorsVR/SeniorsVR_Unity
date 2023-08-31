using System.Collections;
using System.Collections.Generic;
using nico;
using UnityEngine;

public class Cruce : MonoBehaviour
{
    public Semaforo semaforoPeatonal;
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            if(semaforoPeatonal.state){
                TestManager.AddCruceValido();
            }else{
                TestManager.AddCruceInvalido();
            }
        }
    }
}
