using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace nico
{

    public class CirculoRojo : InteractiveParent
    {
        float selectedTime = 0;

        public int tipo = -1;//1=r 2=b 3=y

        public override void Update_()
        {

            if (isCurrentlySelected)
            {
                TutorialState state = TutorialState.EMPTY;
                if (tipo == 1)
                {
                    state = TutorialState.MantenerCamara1;
                }
                else if (tipo == 2)
                {
                    state = TutorialState.MantenerCamara2;
                }
                else if (tipo == 3)
                {
                    state = TutorialState.MantenerCamara3;
                }
                TutorialManager.Instance.ChangeTutorialState(state);
            }
            else
            {
                TutorialState state = TutorialState.EMPTY;
                if (tipo == 1)
                {
                    state = TutorialState.MoverCamara1;
                }
                else if (tipo == 2)
                {
                    state = TutorialState.MoverCamara2;
                }
                else if (tipo == 3)
                {
                    state = TutorialState.MoverCamara3;
                }
                TutorialManager.Instance.ChangeTutorialState(state);
            }

            if (tipo == 1)
            {
                if (Vector3.Distance(PlayerMovement.Instance.transform.position, transform.position) > 15)
                {
                    TutorialManager.Instance.ChangeTutorialState(TutorialState.Moverse);
                    gameObject.SetActive(false);
                }
            }
        }

        public override bool SelectionConditionFunction()
        {
            selectedTime += Time.deltaTime;
            if (selectedTime > 3)
            {
                TutorialState state = TutorialState.EMPTY;
                if (tipo == 1)
                {
                    state = TutorialState.MoverCamara2;
                }
                else if (tipo == 2)
                {
                    state = TutorialState.MoverCamara3;
                }
                else if (tipo == 3)
                {
                    state = TutorialState.Moverse;
                }
                TutorialManager.Instance.ChangeTutorialState(state);
                gameObject.SetActive(false);
            }


            return true;
        }

    }
}