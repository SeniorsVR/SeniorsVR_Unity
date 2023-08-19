using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace nico
{
    public class PlayerBasket : MonoBehaviour
    {
        public static PlayerBasket Instance;
        private void Awake()
        {
            Instance = this;
        }

        public Transform objectsTransformsParent;
        Transform[] objectsTransforms = new Transform[6];

        int[] objetos = new int[6];

        public Transform basketTransform;

        [HideInInspector]
        public int currentIdx = 0;

        [HideInInspector]
        public bool hasBasket = false;

        private void Start()
        {
            for (int i = 0; i < 6; i++)
            {
                objectsTransforms[i] = objectsTransformsParent.GetChild(i);
            }
        }

        public int AddObject(int tipo)
        {
            if (currentIdx < 6)
            {

                MeshRenderer meshRenderer = objectsTransforms[currentIdx].GetChild(tipo).GetComponent<MeshRenderer>();
                meshRenderer.enabled = true;

                objetos[currentIdx] = tipo;

                currentIdx++;
            }

            if (HasBasketFull())
            {
                Mostrador.Instance.ComputeTotalValue(objetos);
            }

            return 6 - currentIdx;
        }

        public bool HasBasketFull()
        {
            return currentIdx >= 6;
        }

        public void PickupBasket(GameObject ogBasket)
        {
            hasBasket = true;

            basketTransform.GetChild(0).gameObject.SetActive(true);

            basketTransform.position = ogBasket.transform.position;
            basketTransform.rotation = ogBasket.transform.rotation;

            ogBasket.transform.position = Vector3.down * 500;
        }
    }
}