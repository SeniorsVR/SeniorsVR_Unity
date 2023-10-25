using System;
using TMPro;
using Unity.Notifications.Android;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Android;
using System.IO;
using System.Runtime.InteropServices;
using FantomLib;

public class StartScene : MonoBehaviour {
    public TMP_Text nameText, ageText;
    public GameObject profilesGameObject, profile, chooseGameObject, empty, popup;
    private Profile[] profiles;
    static private string selectedProfile;

    void Awake() {
        Screen.orientation = ScreenOrientation.Portrait;

        AndroidNotificationCenter.CancelAllDisplayedNotifications();

        var channel = new AndroidNotificationChannel(){
            Id = "channel_id",
            Name = "Default Channel",
            Importance = Importance.Default,
            Description = "SeniorsVR",
        };
        AndroidNotificationCenter.RegisterNotificationChannel(channel);

        var notification = new AndroidNotification();
        notification.Title = "Hola";
        notification.Text = "Soy más que mis errores";
        notification.FireTime = System.DateTime.Now.AddSeconds(10);

        // AndroidNotificationCenter.SendNotification(notification, "channel_id");
    }
    const string saveDirectory = "idbfs/my-game";
    const string saveName = "my-save-data.csv";
    void Start() {
        profiles = SaveSystem.LoadProfiles();
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
        DateTime now = DateTime.Now;

        if (profiles == null) {
            empty.SetActive(true);
            chooseGameObject.SetActive(false);
            profilesGameObject.SetActive(false);
            
            Settings settings = new Settings();
            SaveSystem.saveSettings(settings);
        } else {
            empty.SetActive(false);
            chooseGameObject.SetActive(true);
            profilesGameObject.SetActive(true);
            for (int i = 0; i < profiles.Length; i++) {
                if (i >= 1) {
                    Instantiate(profile, new Vector3(profile.transform.position.x, profile.transform.position.y - 220*i, 0), Quaternion.identity, GameObject.FindGameObjectWithTag("Profiles").transform);
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

    public void Download() {
        chooseGameObject.SetActive(false);
        profilesGameObject.SetActive(false);
        empty.SetActive(false);
        popup.SetActive(true);
    }

    public void Upload() {
        SceneManager.LoadScene("UploadScene");
    }

    public void Confirm() {
        SaveSystem.DownloadEverything();
        ToastController toastController = new ToastController();
        toastController.Show("Archivo guardado en la carpeta Descargas");
        Cancel();
    }

    public void Cancel() {
        popup.SetActive(false);
        if (profiles == null) {
            chooseGameObject.SetActive(false);
            profilesGameObject.SetActive(false);
            empty.SetActive(true);
        } else {
            chooseGameObject.SetActive(true);
            profilesGameObject.SetActive(true);
            empty.SetActive(false);
        }
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
