using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;
using UnityEngine.XR.Management;

public class simulationData : MonoBehaviour {
    static private float time;
    static public string[] statsNames;
    static public int[][] statistics;
    void Start() {
        Debug.Log("aaaaaaaaaaaaa");
        StartCoroutine(StartXRCoroutine());
        statistics = new int [3][];
        statistics[0] = new int [2]; statistics[1] = new int [2]; statistics[2] = new int [2];
        statsNames = new string [statistics.Length];
    }

    void Update() {
        time += Time.deltaTime;
    }
    private void OnEnable() {
        routeMarker.endSimEvent += finish;
    }

    private void OnDisable() {
        routeMarker.endSimEvent -= finish;
    }

    public void finish() {
        StopXR();
        statistics[0][0] = (int) time; statistics[0][1] = 15*60; statsNames[0] = "";
        statistics[1][0] = 3;  statistics[1][1] = 4;  statsNames[1] = "";
        statistics[2][0] = 1;  statistics[2][1] = 4;  statsNames[2] = "";
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }

    static public string timeInMinutes(float time) {
        if (time < 60) {
            return (int) time + "s.";
        } else {
            return ((int) time/60) + "m. " + ((int) time%60) + "s.";
        }
    }

    static public float getTotalTime() {
        return time;
    }

    public IEnumerator StartXRCoroutine(){
        Debug.Log("Initializing XR...");
        yield return XRGeneralSettings.Instance.Manager.InitializeLoader();

        if (XRGeneralSettings.Instance.Manager.activeLoader == null)
        {
            Debug.LogError("Initializing XR Failed. Check Editor or Player log for details.");
        }
        else
        {
            Debug.Log("Starting XR...");
            XRGeneralSettings.Instance.Manager.StartSubsystems();
        }
    }

    void StopXR()
    {
        Debug.Log("Stopping XR...");
        XRGeneralSettings.Instance.Manager.StopSubsystems();
        XRGeneralSettings.Instance.Manager.DeinitializeLoader();
        Debug.Log("XR stopped completely.");
        Screen.orientation = ScreenOrientation.Portrait;
    }
}
