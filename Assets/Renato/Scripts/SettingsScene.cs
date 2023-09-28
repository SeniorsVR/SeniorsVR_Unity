using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SettingsScene : MonoBehaviour {
    public GameObject popupDiscard, popupConfirm;
    public Slider[] sliders;
    void Start() {
        for (int i = 0; i < sliders.Length; i++) {
            sliders[i].value = SaveSystem.loadSettings().GetValues()[i];
        }
    }

    void Update() {
        if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.WindowsEditor) {
            if (Input.GetKeyDown(KeyCode.Escape) && !popupDiscard.activeSelf) {
                popupDiscard.SetActive(true);
            } if (Input.GetKeyDown(KeyCode.Escape) && popupConfirm.activeSelf) {
                popupDiscard.SetActive(false);
            }
        }
    }

    public void SaveChanges() {
        popupConfirm.SetActive(true);
    }

    public void DiscardChanges() {
        SceneManager.LoadScene("FirstScene");
    }

    public void ConfirmChanges() {
        float[] values = new float[sliders.Length];
        for (int i = 0; i < sliders.Length; i++) {
            values[i] = sliders[i].value;
        }
        Settings settings = new Settings(values);
        SaveSystem.saveSettings(settings);
        SceneManager.LoadScene("FirstScene");
    }

    public void DiscardNewChanges() {
        popupConfirm.SetActive(false);
    }

    public void RestoreChanges() {
        for (int i = 0; i < sliders.Length; i++) {
            sliders[i].value = 1;
        }
    }

    public void GoBackButton() {
        popupDiscard.SetActive(false);
    }

    public void ChangedValue(GameObject parent) {
        TMP_Text text = parent.transform.Find("Number").GetComponent<TMP_Text>();
        float number = parent.transform.Find("Slider").GetComponent<Slider>().value;
        text.SetText(number.ToString());
    }
}
