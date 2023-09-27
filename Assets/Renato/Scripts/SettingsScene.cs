using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SettingsScene : MonoBehaviour {
    public Slider[] sliders;
    void Start() {
        
    }

    void Update() {
        if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.WindowsEditor) {
            if (Input.GetKeyDown(KeyCode.Escape)) {
                SceneManager.LoadScene("FirstScene");
            }
        }
    }

    public void SaveChanges() {
        float[] values = new float[sliders.Length];
        for (int i = 0; i < sliders.Length; i++) {
            values[i] = sliders[i].value;
        }
        Settings settings = new Settings(values);
        SceneManager.LoadScene("FirstScene");
    }

    public void ChangedValue(GameObject parent) {
        TMP_Text text = parent.transform.Find("Number").GetComponent<TMP_Text>();
        float number = parent.transform.Find("Slider").GetComponent<Slider>().value;
        text.SetText(number.ToString());
    }
}
