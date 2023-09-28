using System.Collections.Generic;
using TMPro;
using System;
using UnityEngine;
using UnityEngine.SceneManagement;
using nico;
public class ResultsScene : MonoBehaviour {
    static private string currentProfile;
    private Profile profile;
    public TMP_Text nameText, dateText;
    private Simulation newSimulation;
    [SerializeField] private TMP_Text[] texts;
    private string simulationTime;
    void Start() {
        Screen.orientation = ScreenOrientation.Portrait;
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
        currentProfile = ProfileScene.GetSelectedProfile();
        profile = SaveSystem.LoadProfile(currentProfile);
        simulationTime = DateTime.Now.ToString();

        newSimulation = new Simulation(profile.GetID(),profile.GetName(),simulationTime,TestManager.metricas);

        nameText.SetText(profile.GetName());
        texts[1].text = simulationTime;
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
        texts[14].text = TestManager.metricas.contador_transita_calle.ToString() + " segmentos de calle transitados (no en vía peatonal)";

        if (TutorialManager.lastTestWasTutorial)
        {
            TutorialManager.lastTestWasTutorial = false;
            SceneManager.LoadScene("ProfileScene");
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

