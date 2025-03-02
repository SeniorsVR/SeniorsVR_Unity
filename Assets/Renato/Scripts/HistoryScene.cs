#if UNITY_ANDROID
    using System.Runtime.Remoting.Messaging;
#endif
using TMPro;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections.Generic;
using System.Linq;

public class HistoryScene : MonoBehaviour {
    public TMP_Text profileText, dateText, scoreText, timeText;
    public GameObject simulationGameObject, emptyGameObject;
    static private string currentProfile, filename;
    private Simulation[] simulations;
    private Profile profile;
    void Start() {
        Screen.orientation = ScreenOrientation.Portrait;
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
        currentProfile = ProfileScene.GetSelectedProfile();
        simulations = SaveSystem.LoadSimulations(currentProfile);
        profile = SaveSystem.LoadProfile(currentProfile);
        profileText.SetText(profile.GetName());

        int count = simulations.Length;
        List<Simulation> sortedSimulations = simulations.OrderBy(o => o.GetDate()).ToList();
        sortedSimulations.Reverse();
        if (count != 0) {
            for (int i = 0; i < simulations.Length; i++) {
                Simulation simulation = sortedSimulations[i];
                dateText.text = simulation.GetDate().Split(" ")[0]; // Cambiar esto a futuro
                dateText.name = simulation.GetID();
                timeText.text = simulation.GetDate().Split(" ")[1];
                
                Settings settings = SaveSystem.loadSettings();
                scoreText.text = "Puntaje Global: " + Mathf.RoundToInt(Ponderador.ComputeGeneralScore(simulation.metricas, settings));
                if (count >= 1) {
                    GameObject clone = Instantiate(simulationGameObject, new Vector3(simulationGameObject.transform.position.x, simulationGameObject.transform.position.y - 220*i, 0), Quaternion.identity, GameObject.FindGameObjectWithTag("Simulations").transform);
                    clone.name = simulation.GetID();
                }
            }
        }
        else {
            emptyGameObject.SetActive(true);
        }
        simulationGameObject.SetActive(false);
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
        SetSimulationName(simulationName.name);
        SetSelectedProfile(currentProfile);
        SceneManager.LoadScene("DetailScene");
    }

    static public void SetSimulationName(string simulationName) {
        filename = simulationName;
    }

    static public string GetSimulationName() {
        return filename;
    }

    static public void SetSelectedProfile(string profileID) {
        currentProfile = profileID;
    }

    static public string GetSelectedProfile() {
        return currentProfile;
    }
}

