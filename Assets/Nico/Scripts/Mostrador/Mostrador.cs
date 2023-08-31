using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
namespace nico
{
    public class Mostrador : InteractiveParent
    {
        public static Mostrador Instance;
        private void Awake()
        {
            Instance = this;
        }

        public int precioReal = 0, precioRestante = 0;
        int pagaUsuario = 0;

        bool initFlag = false;

        public TextMeshProUGUI text;

        public Transform billetesTransform;

        void OnMostradorPlayerActivation()
        {
            TestManager.SetArticulosFlag(false);

            PlayerMovement.Instance.CollidedWithMostrador(MostradorMovements.Instance.targetPlayerTransform.position);
            MostradorMovements.Instance.StartMovingBasketToBack();
            MostradorMovements.Instance.Invoke("StartMovingBasketToPreMostrador", 1);
            Invoke("ActivateAllBilletes", 2);

        }

        public void SetStateText(bool state)
        {
            text.transform.parent.parent.gameObject.SetActive(state);
            text.text = "$ " + precioReal;
        }

        public void ComputeTotalValue(Articulo[] articulos)
        {

            foreach (Articulo articulo in articulos)
            {
                precioReal += ObjetosConstants.GetPrecioArticulo(articulo);
            }
        }

        public void ActualizarPaga(int valor)
        {
            pagaUsuario += valor;
            precioRestante = precioReal - pagaUsuario;

            if (pagaUsuario < 0)
            {
                Debug.LogError("Que wea, estan lavando dinero");
            }

            if (pagaUsuario == precioReal)
            {
                //ExitoDeCompra();
            }

        }

        public void ExitoDeCompra()
        {

            TestManager.SetCajaFlag(false);
            TestManager.SetIrseFlag(true);

            SetStateText(false);
            Billete.isLocked = true;

            MostradorMovements.Instance.Invoke("StartMovingBasketToMostradorEnd", 1);
            MostradorMovements.Instance.Invoke("StartMovingBasketToPrice", 2);


            int totalBilletes = 0;
            foreach (GameObject billeteGO in GameObject.FindGameObjectsWithTag("Billete"))
            {
                Billete billete = billeteGO.GetComponent<Billete>();
                if (billete && billete.isPermanentlySelected)
                {
                    totalBilletes++;
                }
            }
            TestManager.ComputePaymentEfficiency(pagaUsuario, totalBilletes);

            TestManager.AddVueltoFinal(precioRestante);
        }

        void ActivateAllBilletes()
        {
            TestManager.SetCajaFlag(true);

            ActualizarPaga(0);

            foreach (Billete billete in billetesTransform.GetComponentsInChildren<Billete>(true))
            {
                billete.gameObject.SetActive(true);
            }

        }

        public override bool SelectionConditionFunction()
        {
            return !initFlag && PlayerBasket.Instance.IsBasketFull();
        }
        public override void SelectionFunction()
        {
            if (!initFlag)
            {
                initFlag = true;
                OnMostradorPlayerActivation();
            }
        }

    }
}