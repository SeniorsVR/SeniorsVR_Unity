using TMPro;
using UnityEngine;

public class Results : MonoBehaviour {
    [SerializeField] private TMP_Text[] texts;
    void Start() {
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
        texts[1].text = "2/" + Sign.getListSize().ToString();
        texts[2].text = simulationData.timeInMinutes(simulationData.getTotalTime()*2/5) + " v/s ";
        texts[2].text += simulationData.timeInMinutes(simulationData.getTotalTime()*3/5);
        texts[3].text = simulationData.timeInMinutes(simulationData.getTotalTime());
    }

    public void finish() {
        Application.Quit();
    }
}
