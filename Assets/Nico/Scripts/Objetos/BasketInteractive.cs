using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace nico
{

    public class BasketInteractive : MonoBehaviour
    {

        [HideInInspector]
        public int selectedState = 0;

        void Update()
        {
            selectedState--;
        }

        public void CurrentlySelected()
        {
            if (PlayerBasket.Instance.GetNumArticulos() > 0)
            {
                selectedState = 2;
            }
        }
    }
}