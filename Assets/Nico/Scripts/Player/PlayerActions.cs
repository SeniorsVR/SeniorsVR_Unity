using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace nico
{
    public class PlayerActions : MonoBehaviour
    {

        public float grabRange = 3;
        public static float grabTime = 2;

        InteractiveParent[] interactiveHits = new InteractiveParent[3];
        string[] layers = new string[] { "Interactive", "Basket", "BasketInteractive"};

        public Transform mainCameraTransform;

        // Update is called once per frame
        void Update()
        {

            // Obtiene la posición y dirección del raycast
            Vector3 raycastOrigin = mainCameraTransform.position;
            Vector3 raycastDirection = mainCameraTransform.forward;
            RaycastHit hit;

            for (int i = 0; i < 3; i++)
            {
                int layerMask = 1 << LayerMask.NameToLayer(layers[i]);

                if (Physics.Raycast(raycastOrigin, raycastDirection, out hit, grabRange, layerMask))
                {
                    GameObject hitObject = hit.collider.gameObject;

                    interactiveHits[i] = hitObject.GetComponent<InteractiveParent>();
                }
                else
                {
                    interactiveHits[i] = null;
                }

                if (interactiveHits[i])
                {
                    interactiveHits[i].CurrentlySelected();
                }

            }

            // Dibujar el rayo en la escena para visualización
            Debug.DrawRay(raycastOrigin, raycastDirection * grabRange, Color.red, 0.1f);
        }
    }
}