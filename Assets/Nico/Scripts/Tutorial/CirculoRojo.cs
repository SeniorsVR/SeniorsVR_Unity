using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using nico;

public class CirculoRojo : InteractiveParent
{
    float selectedTime = 0;


    public override void Update_()
    {

        if (isCurrentlySelected)
        {
            TutorialManager.Instance.ChangeTutorialState(TutorialState.MantenerCamara);
        }
        else
        {
            TutorialManager.Instance.ChangeTutorialState(TutorialState.MoverCamara);
        }
    }

    public override bool SelectionConditionFunction()
    {
        selectedTime += Time.deltaTime;
        if (selectedTime > 3)
        {
            TutorialManager.Instance.ChangeTutorialState(TutorialState.Moverse);
            gameObject.SetActive(false);
        }


        return true;
    }

}
