using System.Collections;
using System.Collections.Generic;
using UnityEngine;


namespace nico
{
    public class InteractiveParent : MonoBehaviour
    {
        protected QuickOutline outline;

        protected bool isCurrentlySelected = false;

        protected float selectCounter = 0;
        protected float selectTime = 1;

        protected void Start()
        {
            outline = GetComponent<QuickOutline>();
            if (outline == null)
            {
                outline = GetComponentInChildren<QuickOutline>();
            }

            Start_();
        }
        public virtual void Start_()
        {

        }

        // Update is called once per frame
        protected void Update()
        {

            if (isCurrentlySelected)
            {
                SwitchMaterialState(true);
            }
            else
            {
                selectCounter = 0;
                SwitchMaterialState(false);
            }

            isCurrentlySelected = false;

            Update_();
        }
        public virtual void Update_()
        {

        }

        public virtual void CurrentlySelected()
        {
            /**if (SelectionConditionFunction())
            {
                isCurrentlySelected = true;
                selectCounter += Time.deltaTime;

                if (selectCounter >= selectTime)
                {
                    selectCounter = 0;

                    SelectionFunction();
                }
            }
            else
            {
                selectCounter = 0;
            }**/

            if (SelectionConditionFunction())
            {
                isCurrentlySelected = true;

                if (!PlayerMovement.isMoving && PlayerMovement.ButtonWasPressed())
                {
                    PlayerMovement.movementCooldown += 0.5f;
                    SelectionFunction();
                }
            }
        }

        void SwitchMaterialState(bool state)
        {
            if (outline)
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

        public virtual void SelectionFunction()
        {

        }
        public virtual bool SelectionConditionFunction()
        {
            return true;
        }
    }
}