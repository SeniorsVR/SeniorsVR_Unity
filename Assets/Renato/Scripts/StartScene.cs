using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;

public class StartScene : MonoBehaviour {
    public TMP_Text nameText, ageText;
    public GameObject profilesGameObject, profile, chooseGameObject, empty;
    private Profile[] profiles;
    static private string selectedProfile;

    void Awake() {
        Screen.orientation = ScreenOrientation.Portrait;
    }
    void Start() {
        profiles = SaveSystem.LoadProfiles();
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
        DateTime now = DateTime.Now;
        if (profiles == null) {
            empty.SetActive(true);
            chooseGameObject.SetActive(false);
            profilesGameObject.SetActive(false);
        } else {
            empty.SetActive(false);
            chooseGameObject.SetActive(true);
            profilesGameObject.SetActive(true);
            for (int i = 0; i < profiles.Length; i++) {
                if (i >= 1) {
                    GameObject clone = Instantiate(profile, new Vector3(profile.transform.position.x, profile.transform.position.y - 220*i, 0), Quaternion.identity, GameObject.FindGameObjectWithTag("Profiles").transform);
                }
                nameText.name = profiles[i].GetID();
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

    public void Settings() {
        SceneManager.LoadScene("SettingsScene");
    }

    public void CreateProfile() {
        SceneManager.LoadScene("CreateProfileScene");
    }

    public void ProfileView(TMP_Text id) {
        SetSelectedProfile(id.name);
        SceneManager.LoadScene("ProfileScene");
    }

    static public void SetSelectedProfile(string profileID) {
        selectedProfile = profileID;
    }

    static public string GetSelectedProfile() {
        return selectedProfile;
    }
}
