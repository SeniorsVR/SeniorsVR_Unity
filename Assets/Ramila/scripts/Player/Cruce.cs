using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cruce : MonoBehaviour
{
    public bool countedFlag = false;

    private void OnTriggerEnter(Collider other)
    {
        if (!countedFlag)
        {
            if (other.CompareTag("Player"))
            {
                countedFlag = true;

                //Contar
            }
        }
    }
}
