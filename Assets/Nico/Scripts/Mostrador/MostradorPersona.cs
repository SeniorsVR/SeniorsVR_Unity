using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace nico
{
    public class MostradorPersona : MonoBehaviour
    {
        float seleccionarCounter = 0;
        float seleccionTime = 5;

        bool isCurrentlySelected = false;

        // Start is called before the first frame update
        void Start()
        {

        }

        void Update()
        {

            if (isCurrentlySelected)
            {

            }
            else
            {
                seleccionarCounter = 0;
            }

            isCurrentlySelected = false;
        }

        public void CurrentlySelected()
        {
            isCurrentlySelected = true;
            seleccionarCounter += Time.deltaTime;

            if (seleccionarCounter >= seleccionTime && TestManager.enCaja)
            {
                seleccionarCounter = 0;

                Activar();
            }

        }

        void Activar()
        {
            Mostrador.Instance.ExitoDeCompra();
        }
    }
}