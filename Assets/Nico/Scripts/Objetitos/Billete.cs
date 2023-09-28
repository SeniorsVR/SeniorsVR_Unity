using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace nico
{
    public class Billete : InteractiveParent
    {

        public GameObject outline_go;
        public int tipo = -1;

        [HideInInspector]
        public bool isPermanentlySelected;

        public SpriteRenderer spriteRenderer, outlineRenderer;

        public Sprite[] sprites;

        Vector3 ogPos, playerPos, pagaPos;

        bool inMostradorFlag = true;
        bool hideFlag = false;

        public static bool isLocked = false;

        new void Start()
        {

            selectTime = PlayerActions.grabTime;

            ogPos = transform.position;

            //playerPos = Mostrador.Instance.transform.position - (Mostrador.Instance.transform.right*2 + Mostrador.Instance.transform.up * 2f) * MostradorMovements.scalar;
            playerPos = MostradorMovements.Instance.targetPlayerTransform.position + (Mostrador.Instance.transform.up * 1f) * MostradorMovements.scalar;
            pagaPos = Mostrador.Instance.transform.position + (Mostrador.Instance.transform.right - Mostrador.Instance.transform.forward + 0.75f * Mostrador.Instance.transform.up) * MostradorMovements.scalar;
            transform.position = playerPos;

            if (tipo < 4)
            {
                outlineRenderer.sprite = sprites[9];
            }
            else
            {
                outlineRenderer.sprite = sprites[10];
            }

            spriteRenderer.sprite = sprites[tipo];

            gameObject.SetActive(false);
        }


        new void Update()
        {
            if (isLocked)
            {
                IsHidding();
            }

            if (isCurrentlySelected || isPermanentlySelected)
            {
                outline_go.SetActive(true);
            }
            else
            {
                selectCounter = 0;
                outline_go.SetActive(false);
            }

            isCurrentlySelected = false;

            if (inMostradorFlag)
            {
                if (isPermanentlySelected)
                {
                    Vector3 selectedPos = ogPos + transform.right * MostradorMovements.scalar;
                    transform.position = Vector3.Lerp(transform.position, selectedPos, Time.deltaTime * 2);
                }
                else
                {
                    transform.position = Vector3.Lerp(transform.position, ogPos, Time.deltaTime * 2);
                }
            }
            else if (hideFlag)
            {
                if (isPermanentlySelected)
                {
                    transform.position = Vector3.Lerp(transform.position, pagaPos, Time.deltaTime * 2);
                }
                else
                {
                    transform.position = Vector3.Lerp(transform.position, playerPos, Time.deltaTime * 2);
                }
            }
        }

        public override bool SelectionConditionFunction()
        {
            return !isLocked;
        }
        public override void SelectionFunction()
        {
            SwitchSelectedState();
        }

        void SwitchSelectedState()
        {

            MostradorPersona.Instance.confirmar.SetActive(false);

            isPermanentlySelected = !isPermanentlySelected;
            if (isPermanentlySelected)
            {
                Mostrador.Instance.ActualizarPaga(Billete.ObtenerValorDeBilllete(tipo));
                outlineRenderer.transform.localScale = Vector3.one * 1.2f;

                TestManager.AddVesMarcadoBillete();


                if (TutorialManager.Instance && TutorialManager.Instance.tutorialState == TutorialState.Pagar1)
                {
                    TutorialManager.Instance.ChangeTutorialState(TutorialState.Pagar2);
                }
            }
            else
            {
                Mostrador.Instance.ActualizarPaga(-Billete.ObtenerValorDeBilllete(tipo));
                outlineRenderer.transform.localScale = Vector3.one * 1.0795f;

                TestManager.AddVesDevueltoBillete();
            }
        }

        public void IsHidding()
        {
            inMostradorFlag = false;
            hideFlag = true;

            if (Vector3.Distance(playerPos, transform.position) < 0.1f || Vector3.Distance(pagaPos, transform.position) < 0.1f)
            {
                Destroy(gameObject);
            }
        }

        public static int ObtenerValorDeBilllete(int tipo)
        {
            switch (tipo)
            {
                case 0: return 10;
                case 1: return 50;
                case 2: return 100;
                case 3: return 500;
                case 4: return 1000;
                case 5: return 2000;
                case 6: return 5000;
                case 7: return 10000;
                case 8: return 20000;
            }
            Debug.LogError("Tipo de billete no existente");
            return -1;
        }
    }
}