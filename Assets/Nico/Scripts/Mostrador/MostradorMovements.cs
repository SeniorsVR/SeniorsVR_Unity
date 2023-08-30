using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
namespace nico
{

    public class MostradorMovements : MonoBehaviour
    {
        public static MostradorMovements Instance;
        private void Awake()
        {
            Instance = this;
        }

        public Transform basketTransform, targetBasketTransform, targetPlayerTransform;

        bool basketToBack = false;
        bool basketToPreMostradorFlag = false;
        bool basketToMostradorFlag = false;
        bool basketToMostradorEndFlag = false;
        bool basketToPriceFlag = false;
        bool basketToHideFlag = false;
        bool bagToMostradorFlag = false;
        bool bagToPlayerFlag = false;
        bool bagToShowFlag = false;

        Vector3 ogBasketLocalPos, basketHidePos, basketPricePos, bagPickupPos;
        Quaternion ogBasketLocalRot;

        private void Start()
        {
            ogBasketLocalPos = basketTransform.localPosition;
            ogBasketLocalRot = basketTransform.localRotation;

            basketPricePos = transform.position + 0.75f * transform.up - transform.forward + transform.right;
            basketHidePos = basketPricePos - 3 * transform.up;

            bagPickupPos = targetBasketTransform.position - transform.forward * 2;
        }

        private void Update()
        {
            if (basketToBack)
            {
                MoveBasketToBack();
            }
            else if (basketToPreMostradorFlag)
            {
                MoveBasketToPreMostrador();
            }
            else if(basketToMostradorFlag)
            {
                MoveBasketToMostrador();
            }
            else if (basketToMostradorEndFlag)
            {
                MoveBasketToMostradorEnd();
            }
            else if (basketToPriceFlag)
            {
                MoveBasketToPrice();
            }
            else if (basketToHideFlag)
            {
                MoveBasketToHide();
            }
            else if (bagToShowFlag)
            {
                MoveBagToShow();
            }
            else if (bagToMostradorFlag)
            {
                MoveBagToMostrador();
            }
            else if (bagToPlayerFlag)
            {
                MoveBagToPlayer();
            }
        }

        public void StartMovingBasketToBack()
        {
            DropBasket();

            basketToBack = true;
        }
        public void MoveBasketToBack()
        {
            Vector3 targetPos = bagPickupPos - transform.right * 3;
            basketTransform.position = Vector3.Lerp(basketTransform.position, targetPos, Time.deltaTime);
        }

        public void StartMovingBasketToPreMostrador()
        {

            basketToBack = false;
            basketToPreMostradorFlag = true;

            basketTransform.position = bagPickupPos - transform.right*3;
        }
        void MoveBasketToPreMostrador()
        {
            Vector3 targetPos = bagPickupPos + Vector3.up * 0.25f;
            basketTransform.position = Vector3.Lerp(basketTransform.position, targetPos, Time.deltaTime * 2);
            basketTransform.rotation = Quaternion.Lerp(basketTransform.rotation, Quaternion.identity, Time.deltaTime * 2);

            if (Vector3.Distance(basketTransform.localPosition, targetPos) < 0.05f)
            {
                StartMovingBasketToMostrador();
            }
        }

        public void StartMovingBasketToMostrador()
        {

            basketToPreMostradorFlag = false;
            basketToMostradorFlag = true;

            Mostrador.Instance.SetStateText(true);
        }
        void MoveBasketToMostrador()
        {
            basketTransform.position = Vector3.Lerp(basketTransform.position, targetBasketTransform.position, Time.deltaTime * 2);
            basketTransform.rotation = Quaternion.Lerp(basketTransform.rotation, Quaternion.identity, Time.deltaTime * 2);
        }

        public void StartMovingBasketToMostradorEnd()
        {

            basketToMostradorFlag = false;
            basketToMostradorEndFlag = true;
        }
        void MoveBasketToMostradorEnd()
        {
            basketTransform.position = Vector3.Lerp(basketTransform.position, targetBasketTransform.position - transform.forward * 2, Time.deltaTime * 2);
        }

        public void StartMovingBasketToPrice()
        {

            basketToMostradorEndFlag = false;
            basketToPriceFlag = true;
        }
        void MoveBasketToPrice()
        {
            basketTransform.localPosition = Vector3.Lerp(basketTransform.localPosition, basketPricePos, Time.deltaTime * 2);

            if (Vector3.Distance(basketTransform.localPosition, basketPricePos) < 0.05f)
            {
                StartMovingBasketToHide();
            }
        }

        public void StartMovingBasketToHide()
        {

            basketToPriceFlag = false;
            basketToHideFlag = true;
        }
        void MoveBasketToHide()
        {
            basketTransform.localPosition = Vector3.Lerp(basketTransform.localPosition, basketHidePos, Time.deltaTime * 2);

            if (Vector3.Distance(basketTransform.localPosition, basketHidePos) < 0.05f)
            {
                StartMovingBagToShow();
            }
        }

        public void StartMovingBagToShow()
        {

            basketToHideFlag = false;
            bagToShowFlag = true;

            //Cambiar basket a bolsa
            basketTransform.GetChild(0).gameObject.SetActive(false);
            basketTransform.GetChild(1).gameObject.SetActive(true);
        }
        void MoveBagToShow()
        {
            basketTransform.localPosition = Vector3.Lerp(basketTransform.localPosition, basketPricePos, Time.deltaTime * 2);

            if (Vector3.Distance(basketTransform.localPosition, basketPricePos) < 0.05f)
            {
                StartMovingBagToMostrador();
            }
        }

        public void StartMovingBagToMostrador()
        {

            bagToShowFlag = false;
            bagToMostradorFlag = true;

            SetLayerRecursively(basketTransform.gameObject, LayerMask.NameToLayer("Interactive"));

            PlayerMovement.isLocked = false;
        }
        void MoveBagToMostrador()
        {
            Quaternion targetAngle = Quaternion.Euler(0,0,20);

            basketTransform.position = Vector3.Lerp(basketTransform.position, bagPickupPos, Time.deltaTime*2);
            basketTransform.rotation = Quaternion.Lerp(basketTransform.rotation, targetAngle, Time.deltaTime*3);

            if (Vector3.Distance(basketTransform.localPosition, bagPickupPos) < 0.05f)
            {
                basketTransform.localPosition = bagPickupPos;
                basketTransform.rotation = targetAngle;

                bagToMostradorFlag = false;
            }
        }

        public void StartMovingBagToPlayer()
        {
            basketTransform.parent = PlayerMovement.Instance.basketTransform;
            SetLayerRecursively(basketTransform.gameObject, LayerMask.NameToLayer("Basket"));

            bagToMostradorFlag = false;
            bagToPlayerFlag = true;

        }
        void MoveBagToPlayer()
        {
            basketTransform.localPosition = Vector3.Lerp(basketTransform.localPosition, ogBasketLocalPos, Time.deltaTime * 2);
            basketTransform.localRotation = Quaternion.Lerp(basketTransform.localRotation, ogBasketLocalRot, Time.deltaTime * 4);

            if (Vector3.Distance(basketTransform.localPosition, ogBasketLocalPos) < 0.05f)
            {
                EndMoveBagToPlayer();
            }
        }

        void EndMoveBagToPlayer()
        {
            basketTransform.localPosition = ogBasketLocalPos;
            basketTransform.localRotation = ogBasketLocalRot;

            bagToPlayerFlag = false;

        }


        void DropBasket()
        {
            basketTransform.parent = null;
            SetLayerRecursively(basketTransform.gameObject, LayerMask.NameToLayer("Default"));

        }

        //No tiene sentido que esta funcion este en este script, pero bueno.
        public static void SetLayerRecursively(GameObject obj, int newLayer)
        {
            obj.layer = newLayer;

            foreach (Transform child in obj.transform)
            {
                SetLayerRecursively(child.gameObject, newLayer);
            }
        }
    }
}