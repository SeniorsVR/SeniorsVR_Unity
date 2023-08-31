using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace nico
{

    public class MinimarketPuerta : MonoBehaviour
    {
        private void OnTriggerEnter(Collider other)
        {
            if (other.CompareTag("Player") && TestManager.enIrse)
            {
                TestManager.SetIrseFlag(false);

                TestManager.PrintInLog();
            }
        }
    }
}