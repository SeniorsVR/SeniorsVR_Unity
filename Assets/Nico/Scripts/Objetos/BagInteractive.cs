using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace nico
{
    public class BagInteractive : InteractiveParent
    {
        bool pickedUp = false;

        public override void Start_()
        {
            selectTime = 1;
        }

        // Update is called once per frame
        public override void Update_()
        {

            if (!pickedUp)
            {
                TestManager.AddSecondsBagPickup(Time.deltaTime);
            }
        }


        public override bool SelectionConditionFunction()
        {
            return !pickedUp;
        }
        public override void SelectionFunction()
        {
            pickedUp = true;
            MostradorMovements.Instance.StartMovingBagToPlayer();
        }

    }
}