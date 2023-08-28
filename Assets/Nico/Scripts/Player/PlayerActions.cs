using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace nico
{
    public class PlayerActions : MonoBehaviour
    {

        public float grabRange = 3;
        public static float grabTime = 2;

        Seleccionable pickUpSeleccionado;
        Billete billeteSeleccionado;
        Mostrador mostradorSeleccionado;
        Baskets basketsSeleccionado;
        MostradorPersona mostradorPersonaSeleccionado;
        BagInteractive bagSeleccionado;

        BasketInteractive basketSeleccionado;
        SeleccionableBasket seleccionableBasketSeleccionado;

        PlayerMovement PlayerMovement;

        public Transform mainCameraTransform;



        // Start is called before the first frame update
        void Start()
        {
            PlayerMovement = GetComponent<PlayerMovement>();
        }

        // Update is called once per frame
        void Update()
        {
            // Obtiene la posición y dirección del raycast
            Vector3 raycastOrigin = mainCameraTransform.position;
            Vector3 raycastDirection = mainCameraTransform.forward;
            RaycastHit hit;

            int layerMask = 1 << LayerMask.NameToLayer("Interactive");
            if (Physics.Raycast(raycastOrigin, raycastDirection, out hit, grabRange, layerMask))
            {
                GameObject hitObject = hit.collider.gameObject;

                pickUpSeleccionado = hitObject.GetComponent<Seleccionable>();
                billeteSeleccionado = hitObject.GetComponent<Billete>();
                mostradorSeleccionado = hitObject.GetComponent<Mostrador>();
                basketsSeleccionado = hitObject.GetComponent<Baskets>();
                mostradorPersonaSeleccionado = hitObject.GetComponent<MostradorPersona>();
                bagSeleccionado = hitObject.GetComponent<BagInteractive>();
            }
            else
            {
                pickUpSeleccionado = null;
                billeteSeleccionado = null;
                mostradorSeleccionado = null;
                basketsSeleccionado = null;
                mostradorPersonaSeleccionado = null;
                bagSeleccionado = null;
            }

            layerMask = 1 << LayerMask.NameToLayer("Basket");
            if (Physics.Raycast(raycastOrigin, raycastDirection, out hit, grabRange, layerMask))
            {
                GameObject hitObject = hit.collider.gameObject;

                basketSeleccionado = hitObject.GetComponent<BasketInteractive>();
            }
            else
            {
                basketSeleccionado = null;
            }

            layerMask = 1 << LayerMask.NameToLayer("BasketInteractive");
            if (Physics.Raycast(raycastOrigin, raycastDirection, out hit, grabRange, layerMask))
            {
                GameObject hitObject = hit.collider.gameObject;

                seleccionableBasketSeleccionado = hitObject.GetComponent<SeleccionableBasket>();
            }
            else
            {
                seleccionableBasketSeleccionado = null;
            }

            // Dibujar el rayo en la escena para visualización
            Debug.DrawRay(raycastOrigin, raycastDirection * grabRange, Color.red, 0.1f);

            if (pickUpSeleccionado)
            {
                pickUpSeleccionado.CurrentlySelected();
            }
            if (billeteSeleccionado)
            {
                billeteSeleccionado.CurrentlySelected();
            }
            if (mostradorSeleccionado)
            {
                mostradorSeleccionado.CurrentlySelected();
            }
            if (basketsSeleccionado)
            {
                basketsSeleccionado.CurrentlySelected();
            }
            if (mostradorPersonaSeleccionado)
            {
                mostradorPersonaSeleccionado.CurrentlySelected();
            }
            if (bagSeleccionado)
            {
                bagSeleccionado.CurrentlySelected();
            }
            if (basketSeleccionado)
            {
                basketSeleccionado.CurrentlySelected();
            }
            if (seleccionableBasketSeleccionado)
            {
                seleccionableBasketSeleccionado.CurrentlySelected();
            }
        }
    }
}