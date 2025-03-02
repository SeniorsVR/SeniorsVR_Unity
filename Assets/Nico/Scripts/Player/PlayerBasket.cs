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

        int maxArticulos = 6;

        public Transform objectsTransformsParent;
        Transform[] objectsTransforms = new Transform[6];

        [HideInInspector]
        public Articulo[] objetos = new Articulo[6];

        public Transform basketTransform;

        [HideInInspector]
        public bool hasBasket = false;

        private void Start()
        {
            TestManager.SetRecojerCanastoFlag(true);

            for (int i = 0; i < 6; i++)
            {
                objectsTransforms[i] = objectsTransformsParent.GetChild(i);
            }
        }

        public int AddObject(Articulo newArticulo, int index, Seleccionable seleccionable)
        {
            int i = 0;
            foreach (Articulo articulo in objetos)
            {
                if (articulo == Articulo.EMPTY)
                {

                    SeleccionableBasket seleccionableBasket = objectsTransforms[i].GetChild(index).GetComponent<SeleccionableBasket>();
                    seleccionableBasket.seleccionable = seleccionable;
                    seleccionableBasket.SetState(true);

                    objetos[i] = newArticulo;
                    break;
                }
                i++;
            }

            if (IsBasketFull())
            {
                Mostrador.Instance.ComputeTotalValue(objetos);


                if (TutorialManager.Instance)
                {
                    TutorialManager.Instance.ChangeTutorialState(TutorialState.IrCaja);
                }

            }


            if (TutorialManager.Instance)
            {
                if (GetNumArticulos() >= 3 && TutorialManager.Instance.tutorialState == TutorialState.RecojerObjetos)
                {
                    TutorialManager.Instance.ChangeTutorialState(TutorialState.DevolerObjetos);
                }
            }

            return maxArticulos - GetNumArticulos();
        }

        public void RemoveObject(int index, int basketIndex)
        {
            SeleccionableBasket seleccionableBasket = objectsTransforms[basketIndex].GetChild(index).GetComponent<SeleccionableBasket>();
            seleccionableBasket.SetState(false);

            objetos[basketIndex] = Articulo.EMPTY;


            if (TutorialManager.Instance)
            {
                if (TutorialManager.Instance.tutorialState == TutorialState.DevolerObjetos)
                {
                    TutorialManager.Instance.ChangeTutorialState(TutorialState.LlenarObjetos);
                }
                else if (TutorialManager.Instance.tutorialState == TutorialState.IrCaja)
                {
                    TutorialManager.Instance.ChangeTutorialState(TutorialState.LlenarObjetos);
                }
            }
        }


        public void PickupBasket(GameObject ogBasket)
        {

            TestManager.SetRecojerCanastoFlag(false);
            TestManager.SetArticulosFlag(true);

            hasBasket = true;

            basketTransform.GetChild(0).gameObject.SetActive(true);

            basketTransform.position = ogBasket.transform.position;
            basketTransform.rotation = ogBasket.transform.rotation;

            ogBasket.transform.position = Vector3.down * 500;


            if (TutorialManager.Instance)
            {
                TutorialManager.Instance.ChangeTutorialState(TutorialState.RecojerObjetos);
            }
        }
    
        public int GetNumArticulos()
        {
            int total = 0;
            foreach (Articulo articulo in objetos)
            {
                if (articulo != Articulo.EMPTY)
                {
                    total++;
                }
            }
            return total;
        }

        public bool IsBasketFull()
        {
            return GetNumArticulos() == maxArticulos;
        }

    }
}