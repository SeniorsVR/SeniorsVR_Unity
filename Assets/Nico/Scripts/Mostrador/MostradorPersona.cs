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

        QuickOutline outline;

        private void Start()
        {
            outline = GetComponent<QuickOutline>();
        }

        void Update()
        {

            if (isCurrentlySelected && TestManager.enCaja)
            {
                SwitchMaterialState(true);
            }
            else
            {
                SwitchMaterialState(false);
                seleccionarCounter = 0;
            }

            isCurrentlySelected = false;
        }

        void SwitchMaterialState(bool state)
        {

            if (state)
            {
                //con outline
                outline.enabled = true;
            }
            else
            {
                //sin outline
                outline.enabled = false;
            }
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