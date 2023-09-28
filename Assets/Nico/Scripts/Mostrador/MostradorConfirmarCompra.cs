using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace nico
{

    public class MostradorConfirmarCompra : InteractiveParent
    {
        public bool si;
        public override bool SelectionConditionFunction()
        {
            return TestManager.enCaja;
        }
        public override void SelectionFunction()
        {
            if (si)
            {
                Mostrador.Instance.ExitoDeCompra();
            }
            transform.parent.gameObject.SetActive(false);
        }
    }
}