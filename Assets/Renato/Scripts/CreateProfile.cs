using FantomLib;
using System;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SelectedDate {
    public static DateTime date = DateTime.Now;
    public static DateTime originalDate = date;
}

public class CreateProfile : MonoBehaviour {
    public TMP_InputField inputName;
    public TMP_Text namePlaceholder, datePlaceholder, dateText;
    private AndroidJavaObject activity;

    public class DateCallback : AndroidJavaProxy {
        public DateCallback() : base("android.app.DatePickerDialog$OnDateSetListener") { }

        public void onDateSet(AndroidJavaObject view, int year, int monthOfYear, int dayOfMonth) {
            SelectedDate.date = new DateTime(year, monthOfYear + 1, dayOfMonth);
        }
    }

    void Start() {
        Screen.orientation = ScreenOrientation.Portrait;
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
        dateText.text = "";
        datePlaceholder.text = "Seleccione una fecha";
    }

    void Update() {
        if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.WindowsEditor) {
            if (Input.GetKeyDown(KeyCode.Escape)) {
                SceneManager.LoadScene("FirstScene");
            }
        }
        if (DateTime.Compare(SelectedDate.date, SelectedDate.originalDate) == -1) {
            datePlaceholder.text = "";
            dateText.text = SelectedDate.date.Day.ToString() + "-" + SelectedDate.date.Month.ToString() + "-" + SelectedDate.date.Year.ToString();
        } else if (DateTime.Compare(SelectedDate.date, SelectedDate.originalDate) == 0) {
            datePlaceholder.text = "Seleccione una fecha";
            dateText.text = "";
        } else {
            datePlaceholder.text = "Fecha inválida";
            datePlaceholder.color = Color.red;
            dateText.text = "";
        }
    }

    public void Create() {
        if (inputName.text == "") {
            namePlaceholder.text = "Ingrese un nombre";
            namePlaceholder.color = Color.red;
        }

        if (dateText.text == "") {
            datePlaceholder.text = "Seleccione una fecha";
            datePlaceholder.color = Color.red;
        }

        if (inputName.text != "" && dateText.text != "") {
            Profile profile = new Profile(inputName.text, dateText.text);
            SaveSystem.SaveProfile(profile);
            ToastController toastController = new ToastController();
            toastController.Show("Perfil creado correctamente");
            SceneManager.LoadScene("FirstScene");
        }

        if (Application.platform == RuntimePlatform.WindowsEditor) {
            Profile profile = new Profile(inputName.text, "25-9-2000");
            SaveSystem.SaveProfile(profile);
            ToastController toastController = new ToastController();
            toastController.Show("Perfil creado correctamente");
            SceneManager.LoadScene("FirstScene");
        }
    }

    public void OnValueChanged() {        
        if (inputName.text != "") {
            namePlaceholder.text = "";
        } else {
            namePlaceholder.text = "Ej: Pedro";
            namePlaceholder.color = new Color32(50, 50, 50, 128);
        }

        /*if (dateText.text != "") {
            agePlaceholder.text = "";
        } else {
            agePlaceholder.text = "Seleccione una fecha";
            agePlaceholder.color = new Color32(50, 50, 50, 128);
        }*/
    }

    public void OnDeselect() {
        if (inputName.text == "") {
            namePlaceholder.text = "Ingrese un nombre";
            namePlaceholder.color = Color.red;
        }

        /*if (dateText.text == "") {
            agePlaceholder.text = "Seleccione una fecha";
            agePlaceholder.color = Color.red;
        }*/
    }

    public void Calendar() {
        activity = new AndroidJavaClass("com.unity3d.player.UnityPlayer").GetStatic<AndroidJavaObject>("currentActivity");
        activity.Call("runOnUiThread", new AndroidJavaRunnable(PickDate));
    }

    void PickDate() {
        new AndroidJavaObject("android.app.DatePickerDialog", activity, new DateCallback(), SelectedDate.date.Year, SelectedDate.date.Month - 1, SelectedDate.date.Day).Call("show");
    }
}
