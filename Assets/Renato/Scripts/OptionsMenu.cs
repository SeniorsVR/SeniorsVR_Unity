using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class OptionsMenu : MonoBehaviour {
    public TMP_Text profileText, ageText;
    private Profile profile;
    private DateTime now;
    static private string currentProfile;
    void Start() {
        Screen.orientation = ScreenOrientation.Portrait;
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
        now = DateTime.Now;
        currentProfile = ProfileScene.GetSelectedProfile();
        profile = SaveSystem.LoadProfile(currentProfile);

        profileText.SetText(profile.GetName());
        string[] split = profile.GetAge().Split('-');
        DateTime time = new(int.Parse(split[2]), int.Parse(split[1]), int.Parse(split[0]));
        ageText.SetText((now - time).Days/365 + " años");
    }

    void Update() {
        if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.WindowsEditor) {
            if (Input.GetKeyDown(KeyCode.Escape)) {
                SceneManager.LoadScene("ProfileScene");
            }
        }
    }

    public void EditProfile() {
        SetSelectedProfile(currentProfile);
        SceneManager.LoadScene("EditProfile");
    }

    public void DeleteProfile() {
        SaveSystem.DeleteProfile(currentProfile);
    }

    static public void SetSelectedProfile(string profileName) {
        currentProfile = profileName;
    }

    static public string GetSelectedProfile() {
        return currentProfile;
    }
}
