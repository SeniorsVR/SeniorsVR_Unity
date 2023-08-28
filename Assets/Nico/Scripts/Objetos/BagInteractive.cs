using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace nico
{
    public class BagInteractive : MonoBehaviour
    {
        float seleccionarCounter = 0;
        float seleccionTime = 1;


        bool pickedUp = false;
        bool isCurrentlySelected = false;

        public QuickOutline outline;


        // Update is called once per frame
        void Update()
        {

            if (isCurrentlySelected)
            {
                SwitchMaterialState(true);
            }
            else
            {
                seleccionarCounter = 0;
                SwitchMaterialState(false);
            }

            if (!pickedUp)
            {
                TestManager.AddSecondsBagPickup(Time.deltaTime);
            }

            isCurrentlySelected = false;
        }

        public void CurrentlySelected()
        {
            isCurrentlySelected = true;
            seleccionarCounter += Time.deltaTime;

            if (seleccionarCounter >= seleccionTime)
            {
                seleccionarCounter = 0;

                Recoger();
            }
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

        public void Recoger()
        {
            pickedUp = true;
            MostradorMovements.Instance.StartMovingBagToPlayer();
        }
    }
}