using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace nico
{

    public class SeleccionableBasket : InteractiveParent
    {

        public Articulo tipo;
        public int index;
        public int basketIndex;

        [HideInInspector]
        public Seleccionable seleccionable;


        // Start is called before the first frame update
        public override void Start_()
        {
            selectTime = PlayerActions.grabTime;

            gameObject.SetActive(false);
        }

        public override bool SelectionConditionFunction()
        {
            return !TestManager.enCaja;
        }
        public override void SelectionFunction() //Devolver el articulo
        {
            PlayerBasket.Instance.RemoveObject(index, basketIndex);
            TestManager.AddVesDevuelto(tipo);

            if (seleccionable)
            {
                seleccionable.Reponer();
            }
        }


        public void SetState(bool state)
        {
            gameObject.SetActive(state);
        }
    }
}