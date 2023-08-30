using System.Collections;
using System.Collections.Generic;
using System.IO;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ResultsScene : MonoBehaviour {
    private string filename, currentProfile;
    [SerializeField] private TMP_Text[] texts;
    void Start() {
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
        filename = HistoryScene.GetSimulationName();
        currentProfile = HistoryScene.GetSelectedProfile();
        Simulation simulation = SaveSystem.LoadSimulation(filename, currentProfile);
        Debug.Log(filename);
        Debug.Log(simulation.GetUsername() + ", " + simulation.GetDate());
        texts[1].text = simulation.GetDate();
        texts[2].text = TimeInSeconds(simulation.GetTotalTime());
        texts[3].text = TimeInSeconds(simulation.GetFirstTime()) + "/" + TimeInSeconds(simulation.GetThirdTime());
        texts[4].text = TimeInSeconds(simulation.GetSecondTime());
        texts[5].text = simulation.GetCorrectItems().ToString() + " objetos correctos";
        texts[6].text = simulation.GetIncorrectItems().ToString() + " objectos incorrectos";
        if (simulation.GetAmountPaid() < simulation.GetMoneyToPay()) {
            texts[7].text = "Pagó " + (simulation.GetMoneyToPay() - simulation.GetAmountPaid()) + "$ menos de lo debido";
        } if (simulation.GetAmountPaid() == simulation.GetAmountPaid()) {
            texts[7].text = "Canceló correctamente";
        } else {
            texts[7].text = "Pagó " + (simulation.GetAmountPaid() - simulation.GetMoneyToPay()) + "$ más de lo debido";
        }
        texts[8].text = simulation.GetBillInteractions().ToString() + "/" + simulation.GetMinBillInteractions().ToString();
        texts[9].text = simulation.GetProductInteractions().ToString() + "/" + simulation.GetMinProductInteractions().ToString();
        if (simulation.GetProductsTook()) {
            texts[10].text = "Sí";
        } else {
            texts[10].text = "No";
        }
        texts[11].text = simulation.GetOutOfRoute().ToString() + " segmentos fuera de ruta";
        texts[12].text = simulation.GetRedLights().ToString() + " luces rojas v/s " + simulation.GetGreenLights().ToString() + " luces verdes";
        texts[13].text = simulation.GetVeredaSegments().ToString() + " en la vereda y " + simulation.GetNoVeredaSegments() + " fuera";
    }

    public void MainMenu() {
        SceneManager.LoadScene("FirstScene");
    }

    public string TimeInSeconds(int time) {
        if (time < 60) {
            return time + "s.";
        } else {
            return time/60 + " m. " + time%60 + " s.";
        }
    }
}
