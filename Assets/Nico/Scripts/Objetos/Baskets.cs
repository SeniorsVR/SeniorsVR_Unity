using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace nico
{
    public class Baskets : MonoBehaviour
    {
        bool isCurrentlySelected = false;
        QuickOutline outline;

        public GameObject topBasket;

        private void Start()
        {
            outline = GetComponent<QuickOutline>();
        }
        void Update()
        {

            if (isCurrentlySelected)
            {
                SwitchMaterialState(true);
            }
            else
            {
                SwitchMaterialState(false);
            }

            isCurrentlySelected = false;
        }
        public void CurrentlySelected()
        {
            if (!PlayerBasket.Instance.hasBasket)
            {
                isCurrentlySelected = true;
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


        private void OnCollisionEnter(Collision collision)
        {
            if (collision.gameObject.CompareTag("Player"))
            {
                if (!PlayerBasket.Instance.hasBasket)
                {
                    PlayerBasket.Instance.PickupBasket(topBasket);
                }
            }
        }
    }
}