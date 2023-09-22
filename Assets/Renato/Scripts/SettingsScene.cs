using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SettingsScene : MonoBehaviour {
    void Start() {
        
    }

    public void SaveChanges() {
        SceneManager.LoadScene("FirstScene");
    }
}
