using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
namespace nico
{
    public class Mostrador : MonoBehaviour
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

        bool isCurrentlySelected = false;
        QuickOutline outline;

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

        private void OnCollisionEnter(Collision other)
        {
            if (other.gameObject.CompareTag("Player") && PlayerBasket.Instance.HasBasketFull())
            {
                if (!initFlag)
                {
                    initFlag = true;
                    OnMostradorPlayerActivation();
                }
            }
        }

        void OnMostradorPlayerActivation()
        {
            TestManager.SetArticulosFlag(false);

            PlayerMovement.Instance.CollidedWithMostrador(MostradorMovements.Instance.targetPlayerTransform.position);
            MostradorMovements.Instance.Invoke("StartMovingBasketToMostrador", 1);
            Invoke("ActivateAllBilletes", 2);

            SetStateText(true);

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

            SetStateText(false);
            Billete.isLocked = true;

            MostradorMovements.Instance.Invoke("StartMovingBasketToMostradorEnd", 1);
            MostradorMovements.Instance.Invoke("StartMovingBasketToPrice", 2);

            TestManager.AddVueltoFinal(precioRestante);
        }

        void ActivateAllBilletes()
        {
            TestManager.SetCajaFlag(true);

            Mostrador.Instance.ActualizarPaga(0);

            foreach (Billete billete in billetesTransform.GetComponentsInChildren<Billete>(true))
            {
                billete.gameObject.SetActive(true);
            }

        }

        public void CurrentlySelected()
        {
            if (!initFlag && PlayerBasket.Instance.currentIdx > 5)
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
    }
}