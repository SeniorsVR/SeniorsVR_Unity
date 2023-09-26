using System.Collections;
using System.Collections.Generic;
#if UNITY_ANDROID
    using System.Runtime.Remoting.Messaging;
#endif
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class HistoryScene : MonoBehaviour {
    public TMP_Text profileText, dateText, scoreText;
    public GameObject simulationGameObject, emptyGameObject;
    static private string currentProfile, filename;
    private Simulation[] simulations;
    private Profile profile;
    void Start() {
        Screen.orientation = ScreenOrientation.Portrait;
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
        currentProfile = ProfileScene.GetSelectedProfile();
        simulations = SaveSystem.LoadSimulations();
        profile = SaveSystem.LoadProfile(currentProfile);
        profileText.SetText(profile.GetName());

        int count = 0;
        if (simulations != null) {
            for (int i = 0; i < simulations.Length; i++) {
                Simulation simulation = simulations[i];
                if (simulation.GetUsername() == currentProfile) {
                    if (count >= 1) {
                        GameObject clone = Instantiate(simulationGameObject, new Vector3(simulationGameObject.transform.position.x, simulationGameObject.transform.position.y - 220*i, 0), Quaternion.identity, GameObject.FindGameObjectWithTag("Simulations").transform);
                    }
                    dateText.text = simulation.GetDate().Split(" ")[0];
                    scoreText.text = "Puntaje Global: "; // + TimeInSeconds(simulation.GetFirstTime());
                    count++;
                }
            }
        }
        if (count == 0) {
            emptyGameObject.SetActive(true);
            simulationGameObject.SetActive(false);
        }
    }

    void Update() {
        if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.WindowsEditor)  {
            if (Input.GetKeyDown(KeyCode.Escape)) {
                SceneManager.LoadScene("ProfileScene");
            }
        }
    }

    public string TimeInSeconds(int time) {
        if (time < 60) {
            return time + "s.";
        } else {
            return time/60 + " m. " + time%60 + " s.";
        }
    }

    public void SeeSimulation(TMP_Text simulationName) {
        SetSimulationName(simulationName.text);
        SetSelectedProfile(currentProfile);
        SceneManager.LoadScene("ResultsScene");
    }

    static public void SetSimulationName(string simulationName) {
        filename = simulationName;
    }

    static public string GetSimulationName() {
        return filename;
    }

    static public void SetSelectedProfile(string profileName) {
        currentProfile = profileName;
    }

    static public string GetSelectedProfile() {
        return currentProfile;
    }
}
