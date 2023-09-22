using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ProfileScene : MonoBehaviour {
    public GameObject popup;
    public TMP_Text profileText, ageText, confirmacion;
    private Profile profile;
    private DateTime now;
    private new string name;
    static private string currentProfile;
    void Start() {
        popup.SetActive(false);
        Screen.orientation = ScreenOrientation.Portrait;
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
        now = DateTime.Now;
        name = StartScene.GetSelectedProfile();
        profile = SaveSystem.LoadProfile(name);

        profileText.SetText(profile.GetName());
        confirmacion.SetText("¿Estás seguro que quieres comenzar un test para el paciente " + profile.GetName() + "?");
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

    public void confirmationPopup(){
        popup.SetActive(true);
    }

    public void confirmationPopupVolver(){
        popup.SetActive(false);
    }

    public void StartSimulation() {
        //Simulation simulation = new Simulation(profile.GetName(), now.ToString(), 5);
        //SaveSystem.SaveSimulation(simulation);
        Screen.orientation = ScreenOrientation.LandscapeLeft;
        Invoke("comenzarTest",5);
    }

    public void Graphics() {
        SceneManager.LoadScene("GraphicsScene");
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
