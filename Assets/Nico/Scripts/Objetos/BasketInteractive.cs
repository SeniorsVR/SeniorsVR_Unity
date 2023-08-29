using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace nico
{

    public class BasketInteractive : InteractiveParent
    {

        [HideInInspector]
        public int selectedState = 0;

        public override void Update_()
        {
            selectedState--;
        }

        public override void CurrentlySelected()
        {
            if (PlayerBasket.Instance.GetNumArticulos() > 0)
            {
                selectedState = 2;
            }
        }
    }
}