using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace nico
{
    public class Baskets : InteractiveParent
    {

        public GameObject topBasket;

        public override void CurrentlySelected()
        {
            if (!PlayerBasket.Instance.hasBasket)
            {
                isCurrentlySelected = true;
            }
        }

        private void OnCollisionStay(Collision collision)
        {
            if (isCurrentlySelected && collision.gameObject.CompareTag("Player"))
            {
                if (!PlayerBasket.Instance.hasBasket)
                {
                    PlayerBasket.Instance.PickupBasket(topBasket);
                }
            }
        }
    }
}