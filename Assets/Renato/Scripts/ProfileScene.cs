using System;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ProfileScene : MonoBehaviour {
    public GameObject popup;
    public TMP_Text profileText, ageText, testsText, confirmacion;
    private Profile profile;
    private Simulation[] simulations;
    private DateTime now;
    static private string currentProfile;
    void Start() {
        popup.SetActive(false);
        Screen.orientation = ScreenOrientation.Portrait;
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
        now = DateTime.Now;
        currentProfile = StartScene.GetSelectedProfile();
        profile = SaveSystem.LoadProfile(currentProfile);
        simulations = SaveSystem.LoadSimulations(currentProfile);

        int count = simulations.Length;
        
        if (count == 0) {
            testsText.SetText("Ninguna");
        } else if (count == 1) {
            testsText.SetText("1 prueba");
        } else {
            testsText.SetText(count.ToString() + " pruebas");
        }

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
        SetSelectedProfile(currentProfile);
        SceneManager.LoadScene("OptionsScene");
    }

    public void confirmationPopup(){
        popup.SetActive(true);
    }

    public void confirmationPopupVolver(){
        popup.SetActive(false);
    }

    public void Tutorial() {
        SceneManager.LoadScene("loadingSceneTutorial");
    }

    public void StartSimulation() {
        //Simulation simulation = new Simulation(profile.GetName(), now.ToString(), 5);
        //SaveSystem.SaveSimulation(simulation);
        SceneManager.LoadScene("loadingScene");
    }

    public void Graphics() {
        SceneManager.LoadScene("GraphicsScene");
    }

    public void History() {
        SetSelectedProfile(currentProfile);
        SceneManager.LoadScene("HistoryScene");
    }

    static public void SetSelectedProfile(string profileID) {
        currentProfile = profileID;
    }

    static public string GetSelectedProfile() {
        return currentProfile;
    }
}
