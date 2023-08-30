using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StartScene : MonoBehaviour {
    public TMP_Text primaryText, nameText, ageText;
    public GameObject profilesGameObject, profile, images;
    static private string selectedProfile;
    void Start() {
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
        Profile[] profiles = SaveSystem.LoadProfiles();
        DateTime now = DateTime.Now;
        if (profiles == null) {
            primaryText.text = "No hay perfiles creados";
            profilesGameObject.SetActive(false);
            images.SetActive(true);
        } else {
            primaryText.text = "Selecciona tu perfil";
            images.SetActive(false);
            for (int i = 0; i < profiles.Length; i++) {
                if (i >= 1) {
                    GameObject clone = Instantiate(profile, new Vector3(profile.transform.position.x, profile.transform.position.y - 220*i, 0), Quaternion.identity, GameObject.FindGameObjectWithTag("Profiles").transform);
                }
                nameText.text = profiles[i].GetName();
                string[] split = profiles[i].GetAge().Split('-');
                DateTime time = new(int.Parse(split[2]), int.Parse(split[1]), int.Parse(split[0]));
                ageText.text = (now - time).Days/365 + " años";
            }
        }
    }

    void Update() {
        if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.WindowsEditor)  {
            if (Input.GetKeyDown(KeyCode.Escape)) {
                Application.Quit();
            }
        }
    }

    public void CreateProfile() {
        SceneManager.LoadScene("CreateProfileScene");
    }

    public void ProfileView(TMP_Text name) {
        SetSelectedProfile(name.text);
        SceneManager.LoadScene("ProfileScene");
    }

    static public void SetSelectedProfile(string profileName) {
        selectedProfile = profileName;
    }

    static public string GetSelectedProfile() {
        return selectedProfile;
    }
}
