using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace nico
{
    public class Seleccionable : InteractiveParent
    {

        public Articulo tipo;
        public int index;

        static bool isBasketFull = false;

        public override void Start_()
        {
            selectTime = PlayerActions.grabTime;
        }

        public override bool SelectionConditionFunction()
        {
            if (PlayerBasket.Instance.hasBasket)
            {
                if (!isBasketFull)
                {
                    isCurrentlySelected = true;
                }
                else
                {
                    TestManager.AddSecondsSeleccionableLleno(Time.deltaTime);
                    return false;
                }
            }
            else
            {
                TestManager.AddSecondsSeleccionableInvalido(Time.deltaTime);
                return false;
            }
            return true;
        }

        public override void SelectionFunction() //Recojer objeto
        {

            int remaning = PlayerBasket.Instance.AddObject(tipo, index, this);
            TestManager.AddVesRecojida(tipo);

            if (remaning <= 0)
            {
                isBasketFull = true;
            }

            gameObject.SetActive(false);
        }

        public void Reponer()
        {
            isBasketFull = false;

            gameObject.SetActive(true);
        }
    }
}