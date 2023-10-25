using FantomLib;
using System;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class OptionsMenu : MonoBehaviour {
    public TMP_Text profileText, ageText,testsText;
    public GameObject popup;
    private Profile profile;
    private DateTime now;
    private Simulation[] simulations;
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

        simulations = SaveSystem.LoadSimulations(currentProfile);

        int count = simulations.Length;
        
        if (count == 0) {
            testsText.SetText("Ninguna");
        } else if (count == 1) {
            testsText.SetText("1 prueba");
        } else {
            testsText.SetText(count.ToString() + " pruebas");
        }
    }

    void Update() {
        if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.WindowsEditor) {
            if (Input.GetKeyDown(KeyCode.Escape) && popup.activeSelf) {
                popup.SetActive(false);
            }
            else if (Input.GetKeyDown(KeyCode.Escape)) {
                SceneManager.LoadScene("ProfileScene");
            }
        }
    }

    public void EditProfile() {
        SetSelectedProfile(currentProfile);
        SceneManager.LoadScene("EditProfile");
    }

    public void DeleteProfile() {
        popup.SetActive(true);
    }

    public void ConfirmDeleteButton() {
        SaveSystem.DeleteProfile(currentProfile);
        ToastController toastController = new ToastController();
        toastController.Show("Perfil borrado");
    }

    public void GoBackButton() {
        popup.SetActive(false);
    }

    static public void SetSelectedProfile(string profileID) {
        currentProfile = profileID;
    }

    static public string GetSelectedProfile() {
        return currentProfile;
    }
}
