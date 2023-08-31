using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace nico
{
    public class PlayerMovement : MonoBehaviour
    {
        public bool vr;
        public static PlayerMovement Instance;
        private void Awake()
        {
            Instance = this;
        }

        public float speed = 1f;
        public float friccion = 1f;
        public float sensibility = 1f;

        public static bool isMoving = false;
        public static float movementCooldown = 0;

        [HideInInspector]
        public Vector3 cameraLookDirection = new Vector3(0, 0, 1);
        Vector3 realLookDirection = new Vector3(0, 0, 1);

        Rigidbody rb;

        public Transform cameraParentTransform,cameraTransform, mainCameraTransform, basketTransform;

        public static bool mostradorFlag = false;
        public static bool isLocked = false;

        [HideInInspector]
        public Vector3 mostradorPosition;

        Vector3 ogBasketAnchorLocalPos;
        Quaternion ogBasketAnchorLocalRotation;
        public BasketInteractive basketInteractive;

        // Start is called before the first frame update
        void Start()
        {
            rb = GetComponent<Rigidbody>();

            //Obtener la posicion y angulo locales de la canasta original respecto al jugador
            ogBasketAnchorLocalPos = basketTransform.GetChild(0).localPosition;
            ogBasketAnchorLocalRotation = basketTransform.GetChild(0).localRotation;
        }

        // Update is called once per frame
        void Update()
        {
            //Actualiza el estado de movimiento
            UpdateMovementState();

            //Funcion para mirar en el Unity
                ObtainOffsetDirection();

            if(vr){
                realLookDirection = mainCameraTransform.forward;
            }

            // Moverse si es necesario
            if (!isLocked)
            {
                if (isMoving)//Muevete
                {
                    Vector3 moveDirection = cameraLookDirection;
                    moveDirection.y = 0;

                    rb.velocity = Vector3.Lerp(rb.velocity, moveDirection * speed, 1 - Time.deltaTime * friccion);

                }
                else//Frena
                {
                    rb.velocity = Vector3.Lerp(rb.velocity, Vector3.zero, Time.deltaTime * friccion);
                }
            }
            else if (mostradorFlag)//Si esta en el mostrador
            {
                IsOnMostrador();
            }

            // Ajustar direccion local de camara
            cameraLookDirection = Vector3.Lerp(cameraLookDirection, realLookDirection, Time.deltaTime * sensibility);
            if(!vr){
                cameraParentTransform.rotation = Quaternion.LookRotation(cameraLookDirection);
            }else{
                cameraTransform.rotation = mainCameraTransform.rotation;
                cameraTransform.position = mainCameraTransform.position;
            }

            //Mueve el canasto
            MoveBasket(cameraLookDirection);
        }

        void MoveBasket(Vector3 basketLookDirection) // Mueve el canasto dependiendo de hacia donde mira
        {
            if (basketInteractive.selectedState <= 0)
            {
                basketLookDirection.y = 0;
                basketTransform.rotation = Quaternion.Lerp(basketTransform.rotation, Quaternion.LookRotation(basketLookDirection), Time.deltaTime * 2); // Que el giro no sea instantanea, para que pueda ser mirado

                //Mueve el modelo en si
                if (basketTransform.childCount > 0)
                {
                    basketTransform.GetChild(0).localPosition = Vector3.Lerp(basketTransform.GetChild(0).localPosition, ogBasketAnchorLocalPos, Time.deltaTime * 3);
                    basketTransform.GetChild(0).localRotation = Quaternion.Lerp(basketTransform.GetChild(0).localRotation, ogBasketAnchorLocalRotation, Time.deltaTime * 3);
                }
            }

        }

        void ObtainOffsetDirection() //Unity editor function
        {
            float rotacionHorizontal = 0;
            float rotacionVertical = 0;
            float force = 0.5f;

            if(!vr){
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


        public void CollidedWithMostrador(Vector3 targetPos) // Llamada cuando el jugador choca con el mostrador
        {
            if (!mostradorFlag)
            {
                mostradorFlag = true;
                isLocked = true;

                rb.velocity = Vector3.zero;
                mostradorPosition = targetPos;
            }
        }
        void IsOnMostrador()
        {
            Vector3 targetPos = mostradorPosition;
            float distance = Vector3.Distance(transform.position, targetPos);
            if (distance < 0.01f)
            {
                transform.position = targetPos;
            }
            else
            {
                transform.position = Vector3.Lerp(transform.position, targetPos, Time.deltaTime * speed);
            }
        }

        void UpdateMovementState()
        {
            if (ButtonWasPressed()) //Que se empieze a mover 0.01 segundos despues de pulsar, para que se pueda detectar cuando esta quieto
            {
                movementCooldown += 0.01f;
            }
            isMoving = movementCooldown <= 0 && ButtonIsHeld();
            movementCooldown = Mathf.Max(0, movementCooldown - Time.deltaTime);
        }
        public float GetCurrentSpeed()
        {
            //No se usa, pero ok
            return rb.velocity.magnitude;
        }

        //Estan funciones deberian ser llamadas cuando se pulsa cualquier boton del control
        public static bool ButtonIsHeld()
        {
            if (Input.GetMouseButton(0) || Input.GetKey(KeyCode.Space))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        public static bool ButtonWasPressed()
        {
            if (Input.GetMouseButtonDown(0) || Input.GetKeyDown(KeyCode.Space))
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}