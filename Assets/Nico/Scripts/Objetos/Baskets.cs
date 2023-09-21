using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace nico
{
    public class Baskets : InteractiveParent
    {

        public GameObject topBasket;

        public override bool SelectionConditionFunction()
        {
            return !PlayerBasket.Instance.hasBasket;
        }
        public override void SelectionFunction()
        {
            if (!PlayerBasket.Instance.hasBasket)
            {
                PlayerBasket.Instance.PickupBasket(topBasket);
            }
        }
    }
}