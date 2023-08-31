using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ProfileScene : MonoBehaviour {
    public TMP_Text profileText, ageText;
    private Profile profile;
    private DateTime now;
    private new string name;
    static private string currentProfile;
    void Start() {
        Screen.orientation = ScreenOrientation.Portrait;
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
        now = DateTime.Now;
        name = StartScene.GetSelectedProfile();
        profile = SaveSystem.LoadProfile(name);

        profileText.SetText(profile.GetName());
        string[] split = profile.GetAge().Split('-');
        DateTime time = new(int.Parse(split[2]), int.Parse(split[1]), int.Parse(split[0]));
        ageText.SetText((now - time).Days/365 + " años");
    }

    void Update() {
        if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.WindowsEditor) {
            if (Input.GetKeyDown(KeyCode.Escape)) {
                SceneManager.LoadScene("FirstScene");
            }
        }
    }

    public void OptionsMenu() {
        SetSelectedProfile(name);
        SceneManager.LoadScene("OptionsScene");
    }

    public void StartSimulation() {
        //Simulation simulation = new Simulation(profile.GetName(), now.ToString(), 5);
        //SaveSystem.SaveSimulation(simulation);
        Screen.orientation = ScreenOrientation.LandscapeLeft;
        Invoke("comenzarTest",5);
    }

    public void History() {
        SetSelectedProfile(name);
        SceneManager.LoadScene("HistoryScene");
    }

    static public void SetSelectedProfile(string profileName) {
        currentProfile = profileName;
    }

    static public string GetSelectedProfile() {
        return currentProfile;
    }

    private void comenzarTest(){
        SceneManager.LoadScene("test");
    }
}
