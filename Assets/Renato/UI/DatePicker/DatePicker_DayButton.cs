using System;
using UnityEngine;
using UnityEngine.UI;

namespace UI.Dates
{
    public class DatePicker_DayButton : DatePicker_Button
    {
        public DateTime Date;
        public DatePickerDayButtonType Type;

        [HideInInspector]
        public DatePicker DatePicker;

        public void Clicked()
        {
            if (!Button.interactable) return;

            DatePicker.DayButtonClicked(Date);
        }

        public void MouseOver()
        {
            if (!Button.interactable) return;

            DatePicker.DayButtonMouseOver(Date);
        }
    }
}
