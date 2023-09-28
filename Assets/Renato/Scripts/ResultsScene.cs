using System.Collections.Generic;
using TMPro;
using System;
using UnityEngine;
using UnityEngine.SceneManagement;
using nico;
public class ResultsScene : MonoBehaviour {
    public bool isDetailScene = false;
    static private string currentProfile;
    private Profile profile;
    public TMP_Text nameText, dateText, global, navegacion, seguridad, ejecucion, ida, vuelta;

    public GameObject navigationTemplate, safetyTemplate, executiveTemplate, popup;
    private Simulation newSimulation;
    [SerializeField] private TMP_Text[] texts;
    private string simulationTime;
    void Start() {
        Screen.orientation = ScreenOrientation.Portrait;
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
        currentProfile = ProfileScene.GetSelectedProfile();
        profile = SaveSystem.LoadProfile(currentProfile);
        nameText.SetText(profile.GetName());

        if(!isDetailScene){
            simulationTime = DateTime.Now.ToString();
            newSimulation = new Simulation(profile.GetID(),profile.GetName(),simulationTime,TestManager.metricas);
            dateText.SetText(simulationTime);
        }else{
            newSimulation = SaveSystem.LoadSimulation(profile.GetID(),HistoryScene.GetSimulationName());
            dateText.SetText(newSimulation.GetDate().ToString());
        }
        

        global.text = Mathf.RoundToInt(Ponderador.ComputeGeneralScore(newSimulation.metricas)).ToString();
        navegacion.text = Mathf.RoundToInt(Ponderador.ComputeNavigationScore(newSimulation.metricas)).ToString();
        ejecucion.text = Mathf.RoundToInt(Ponderador.ComputeExecutionScore(newSimulation.metricas)).ToString();
        seguridad.text = Mathf.RoundToInt(Ponderador.ComputeSafetyScore(newSimulation.metricas)).ToString();

        ida.text = Mathf.RoundToInt(newSimulation.metricas.tiempo_total_ida).ToString() + "s";
        vuelta.text = Mathf.RoundToInt(newSimulation.metricas.tiempo_total_vuelta).ToString() + "s";



        for(int i = 0; i < 11; i++){
            texts[i].text = Mathf.RoundToInt(Ponderador.GetScoreForIndex(i,newSimulation.metricas)*100.0f).ToString();
        }

        /* texts[1].text = simulationTime;
        texts[2].text = TimeInSeconds(TestManager.metricas.tiempo_total);
        texts[3].text = TimeInSeconds(TestManager.metricas.tiempo_total_ida) + "/" + TimeInSeconds(TestManager.metricas.tiempo_total_vuelta);
        texts[4].text = TimeInSeconds(TestManager.metricas.tiempo_total_kiosko);
        texts[5].text = TestManager.metricas.articulos_validos.ToString() + " de 6 objetos correctos";
        texts[6].text = (6-TestManager.metricas.articulos_validos).ToString() + " objectos incorrectos";
        if (TestManager.metricas.vuelto_final > 0) {
            texts[7].text = "Pagó $" + TestManager.metricas.vuelto_final.ToString() + " menos de lo debido";
        }else if (TestManager.metricas.vuelto_final == 0) {
            texts[7].text = "Pagó correctamente";
        } else {
            texts[7].text = "Pagó $" + (-TestManager.metricas.vuelto_final).ToString() + " más de lo debido";
        }
        texts[8].text = (TestManager.metricas.veces_marcado_billete+TestManager.metricas.veces_devuelto_billete).ToString() + "/" + TestManager.metricas.cantidad_minima_billetes.ToString();
        texts[9].text = (TestManager.metricas.veces_devuelto_objeto+TestManager.metricas.veces_recogido_objeto).ToString() + "/6";
        if (!TestManager.metricas.irse_sin_bolsa) {
            texts[10].text = "Sí";
        } else {
            texts[10].text = "No";
        }
        texts[11].text = TestManager.metricas.cantidad_segmentos_ruta_transitados.ToString() + "/" + TestManager.metricas.cantidad_segmentos_ruta.ToString();
        texts[12].text = TestManager.metricas.cantidad_segmentos_no_ruta.ToString() + " segmentos fuera de ruta";
        texts[13].text = TestManager.metricas.contador_cruces_invalidos.ToString() + " luces rojas v/s " + TestManager.metricas.contador_cruces_validos.ToString() + " luces verdes";
        texts[14].text = TestManager.metricas.contador_transita_calle.ToString() + " segmentos de calle transitados (no en vía peatonal)"; */

        if (TutorialManager.lastTestWasTutorial)
        {
            TutorialManager.lastTestWasTutorial = false;
            SceneManager.LoadScene("ProfileScene");
        }
    }

    void Update() {
        if(!isDetailScene){
            return;
        }
        if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.WindowsEditor)  {
            if (Input.GetKeyDown(KeyCode.Escape)) {
                SceneManager.LoadScene("HistoryScene");
            }
        }
    }
    
    public void MainMenu() {
        SceneManager.LoadScene("FirstScene");
    }

    public string TimeInSeconds(float time) {
        if (time < 60) {
            return Mathf.RoundToInt(time) + "s.";
        } else {
            return Mathf.RoundToInt(time)/60 + " m. " + Mathf.RoundToInt(time)%60 + " s.";
        }
    }

    public void SaveSimulation(){
        SaveSystem.SaveSimulation(newSimulation);
        SceneManager.LoadScene("ProfileScene");
    }

    public void displayNavigation(){
        navigationTemplate.SetActive(!safetyTemplate.activeSelf);
    }

    public void displayExecutive(){
        executiveTemplate.SetActive(!safetyTemplate.activeSelf);
    }

    public void displaySafety(){
        safetyTemplate.SetActive(!safetyTemplate.activeSelf);
    }

    public void descartar(){
        SceneManager.LoadScene("ProfileScene");
    }

    public void registrar(){
        popup.SetActive(true);
    }

    public void volver(){
        popup.SetActive(false);
    }

    public void eliminarRegistro(){
        SaveSystem.deleteSimulation(profile.GetID(),newSimulation.GetID());
        SceneManager.LoadScene("HistoryScene");
    }
}



        //filename = HistoryScene.GetSimulationName();
        //filename = HistoryScene.GetSimulationName();
        //dateText.SetText(filename);
        //Simulation simulation = SaveSystem.LoadSimulation(filename, currentProfile);
        //Debug.Log(filename);
        //Debug.Log(simulation.GetUsername() + ", " + simulation.GetDate());
        //navegationDropdown.ClearOptions();
        //List<string> options = new List<string>();
        //options.Add("Tiempo Ida:    2:35s");
        //options.Add("Tiempo Vuelta:    3:15s");
        //options.Add("Ida/Vuelta:    0.79" );
        //options.Add("Completitud de ruta:   1");
        //options.Add("Desvío de ruta:    4");
        //navegationDropdown.AddOptions(options);
        //texts[1].text = DateTime.Now.ToString();
        //texts[2].text = TimeInSeconds(TestManager.metricas.tiempo_total);
        //texts[3].text = TimeInSeconds(TestManager.metricas.tiempo_total_ida) + "/" + TimeInSeconds(TestManager.metricas.tiempo_total_vuelta);
        //texts[4].text = TimeInSeconds(TestManager.metricas.tiempo_total_kiosko);
        //texts[5].text = TestManager.metricas.articulos_validos.ToString() + " de 6 objetos correctos";
        //texts[6].text = (6-TestManager.metricas.articulos_validos).ToString() + " objectos incorrectos";
        //if (TestManager.metricas.vuelto_final > 0) {
        //    texts[7].text = "Pagó $" + TestManager.metricas.vuelto_final.ToString() + " menos de lo debido";
        //}else if (TestManager.metricas.vuelto_final == 0) {
        //    texts[7].text = "Pagó correctamente";
        //} else {
        //    texts[7].text = "Pagó $" + (-TestManager.metricas.vuelto_final).ToString() + " más de lo debido";
        //}
        //texts[8].text = (TestManager.metricas.veces_marcado_billete+TestManager.metricas.veces_devuelto_billete).ToString() + "/" + TestManager.metricas.cantidad_minima_billetes.ToString();
        //texts[9].text = (TestManager.metricas.veces_devuelto_objeto+TestManager.metricas.veces_recogido_objeto).ToString() + "/6";
        //if (!TestManager.metricas.irse_sin_bolsa) {
        //    texts[10].text = "Sí";
        //} else {
        //    texts[10].text = "No";
        //}
        //texts[11].text = TestManager.metricas.cantidad_segmentos_ruta_transitados.ToString() + "/" + TestManager.metricas.cantidad_segmentos_ruta.ToString();
        //texts[12].text = TestManager.metricas.cantidad_segmentos_no_ruta.ToString() + " segmentos fuera de ruta";
        //texts[13].text = TestManager.metricas.contador_cruces_invalidos.ToString() + " luces rojas v/s " + TestManager.metricas.contador_cruces_validos.ToString() + " luces verdes";
        //texts[14].text = TestManager.metricas.contador_transita_calle.ToString() + " segmentos de calle transitados (no en vía peatonal)";

