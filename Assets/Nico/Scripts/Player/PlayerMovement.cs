using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace nico
{
    public class PlayerMovement : MonoBehaviour
    {
        public static PlayerMovement Instance;
        private void Awake()
        {
            Instance = this;
        }

        public float speed = 1f;
        public float friccion = 1f;
        public float sensibility = 1f;

        [HideInInspector]
        public bool isMoving = false;

        [HideInInspector]
        public Vector3 cameraLookDirection = new Vector3(0, 0, 1);
        Vector3 realLookDirection = new Vector3(0, 0, 1);

        Rigidbody rb;

        public Transform cameraTransform, basketTransform;

        [HideInInspector]
        public bool MostradorFlag = false;
        public static bool IsLocked = false;

        [HideInInspector]
        public Vector3 mostradorPosition;

        Vector3 ogBasketAnchorLocalPos;
        Quaternion ogBasketAnchorLocalRotation;

        // Start is called before the first frame update
        void Start()
        {
            rb = GetComponent<Rigidbody>();

            ogBasketAnchorLocalPos = basketTransform.GetChild(0).localPosition;
            ogBasketAnchorLocalRotation = basketTransform.GetChild(0).localRotation;
        }

        // Update is called once per frame
        void Update()
        {
            ObtainOffsetDirection();
            CheckIfMovement();

            // Moverse si es necesario
            if (!IsLocked)
            {
                if (isMoving)
                {
                    Vector3 moveDirection = cameraLookDirection;
                    moveDirection.y = 0;

                    rb.velocity = Vector3.Lerp(rb.velocity, moveDirection * speed, 1 - Time.deltaTime * friccion);

                }
                else
                {
                    rb.velocity = Vector3.Lerp(rb.velocity, Vector3.zero, Time.deltaTime * friccion);
                }
            }
            else
            {
                IsOnMostrador();
            }

            // Ajustar direccion local de camara
            cameraLookDirection = Vector3.Lerp(cameraLookDirection, realLookDirection, Time.deltaTime * sensibility);

            cameraTransform.rotation = Quaternion.LookRotation(cameraLookDirection);

            MoveBasket(cameraLookDirection);

        }

        void MoveBasket(Vector3 basketLookDirection)
        {

            basketLookDirection.y = 0;
            basketTransform.rotation = Quaternion.LookRotation(basketLookDirection);

            if (basketTransform.childCount > 0)
            {
                basketTransform.GetChild(0).localPosition = Vector3.Lerp(basketTransform.GetChild(0).localPosition, ogBasketAnchorLocalPos, Time.deltaTime * 5);
                basketTransform.GetChild(0).localRotation = Quaternion.Lerp(basketTransform.GetChild(0).localRotation, ogBasketAnchorLocalRotation, Time.deltaTime * 5);
            }
        }

        void ObtainOffsetDirection()
        {
            float rotacionHorizontal = 0;
            float rotacionVertical = 0;
            float force = 0.5f;

            if (Input.GetKey(KeyCode.W))
            {
                rotacionVertical += force;
            }
            if (Input.GetKey(KeyCode.S))
            {
                rotacionVertical -= force;
            }
            if (Input.GetKey(KeyCode.A))
            {
                rotacionHorizontal -= force;
            }
            if (Input.GetKey(KeyCode.D))
            {
                rotacionHorizontal += force;
            }

            if (rotacionHorizontal != 0)
            {
                realLookDirection = Quaternion.Euler(0, rotacionHorizontal, 0) * realLookDirection * 0.75f;
            }
            if (rotacionVertical != 0)
            {
                realLookDirection += rotacionVertical * Vector3.up * Time.deltaTime * 2;
            }

            realLookDirection.Normalize();
        }

        void CheckIfMovement()
        {
            if (Input.GetMouseButton(0) || Input.GetKey(KeyCode.Space))
            {
                isMoving = true;
            }
            else
            {
                isMoving = false;
            }
        }

        public void CollidedWithMostrador(Vector3 targetPos)
        {
            if (!MostradorFlag)
            {
                MostradorFlag = true;
                IsLocked = true;

                rb.velocity = Vector3.zero;
                mostradorPosition = targetPos;
            }
        }
        void IsOnMostrador()
        {
            transform.position = Vector3.Lerp(transform.position, mostradorPosition, Time.deltaTime * speed);
        }
    }
}