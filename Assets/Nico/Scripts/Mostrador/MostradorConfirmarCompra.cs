using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace nico
{

    public class MostradorConfirmarCompra : InteractiveParent
    {

        public override bool SelectionConditionFunction()
        {
            return TestManager.enCaja;
        }
        public override void SelectionFunction()
        {
            Mostrador.Instance.ExitoDeCompra();
            gameObject.SetActive(false);
        }
    }
}