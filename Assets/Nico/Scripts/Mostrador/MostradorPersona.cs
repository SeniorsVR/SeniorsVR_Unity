using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace nico
{
    public class MostradorPersona : InteractiveParent
    {
        public static MostradorPersona Instance;
        private void Awake()
        {
            Instance = this;
        }

        public GameObject confirmar;

        public override bool SelectionConditionFunction()
        {
            return TestManager.enCaja;
        }
        public override void SelectionFunction()
        {
            confirmar.SetActive(true);
        }
    }
}