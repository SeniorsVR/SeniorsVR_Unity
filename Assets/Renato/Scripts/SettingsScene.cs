using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SettingsScene : MonoBehaviour {
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
        SceneManager.LoadScene("FirstScene");
    }
}
