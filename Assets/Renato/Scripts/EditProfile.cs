using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using TMPro;

public class EditProfile : MonoBehaviour {
    public TMP_InputField inputName, inputAge;
    public TMP_Text namePlaceholder, agePlaceholder;
    private Profile profile;
    static private string currentProfile;
    void Start() {
        Screen.orientation = ScreenOrientation.Portrait;
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
        currentProfile = OptionsMenu.GetSelectedProfile();
        profile = SaveSystem.LoadProfile(currentProfile);
        namePlaceholder.SetText(profile.GetName());
        agePlaceholder.SetText(profile.GetAge());
    }

    void Update() {
        if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.WindowsEditor) {
            if (Input.GetKeyDown(KeyCode.Escape)) {
                SceneManager.LoadScene("OptionsScene");
            }
        }
    }
}
