using System.Collections;
using System.Collections.Generic;
using nico;
using UnityEngine;

public class Calle : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("Player"))
        {
            TestManager.AddcontadorTransitaCalle();
        }
    }
}
