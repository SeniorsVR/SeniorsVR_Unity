using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace nico
{

    public class SeleccionableBasket : MonoBehaviour
    {

        public Articulo tipo;
        public int index;
        public int basketIndex;

        [HideInInspector]
        public Seleccionable seleccionable;

        bool isCurrentlySelected = false;
        QuickOutline outline;

        MeshRenderer meshRenderer;


        float grabCounter = 0;


        // Start is called before the first frame update
        void Start()
        {
            meshRenderer = GetComponent<MeshRenderer>();
            outline = GetComponent<QuickOutline>();

            meshRenderer.enabled = true;
            gameObject.SetActive(false);

        }

        // Update is called once per frame
        void Update()
        {

            if (isCurrentlySelected)
            {
                SwitchMaterialState(true);
            }
            else
            {
                grabCounter = 0;
                SwitchMaterialState(false);
            }

            isCurrentlySelected = false;
        }

        public void CurrentlySelected()
        {
            isCurrentlySelected = true;
            grabCounter += Time.deltaTime;

            if (grabCounter >= PlayerActions.grabTime)
            {
                grabCounter = 0;

                Devolver();
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

        public void Devolver()
        {

            PlayerBasket.Instance.RemoveObject(index, basketIndex);
            TestManager.AddVesDevuelto(tipo);

            if (seleccionable)
            {
                seleccionable.Reponer();
            }

            //meshRenderer.enabled = false;
        }

        public void SetState(bool state)
        {
            //meshRenderer.enabled = true;

            gameObject.SetActive(state);
        }
    }
}