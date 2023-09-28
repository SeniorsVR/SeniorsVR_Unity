using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;
using nico;

public class resultadosAleatorios : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void generarAleatorios(){
        TestManager.metricas.tiempo_total_ida = Random.Range(120.0f,240.0f);
        TestManager.metricas.tiempo_total_vuelta = TestManager.metricas.tiempo_total_ida * Random.Range(0.8f,1.6f);
        TestManager.metricas.tiempo_total_kiosko = Random.Range(120.0f,340.0f);
        TestManager.metricas.tiempo_total = TestManager.metricas.tiempo_total_ida + TestManager.metricas.tiempo_total_vuelta + TestManager.metricas.tiempo_total_kiosko;
        TestManager.metricas.articulos_validos = Random.Range(0,6);
        TestManager.metricas.vuelto_final = Random.Range(0,15000);
        TestManager.metricas.veces_marcado_billete = Random.Range(0,10);
        TestManager.metricas.veces_devuelto_billete = Random.Range(0,TestManager.metricas.veces_marcado_billete);
        TestManager.ComputePaymentEfficiency(Random.Range(5000,40000), TestManager.metricas.veces_marcado_billete-TestManager.metricas.veces_devuelto_billete);
        TestManager.metricas.veces_recogido_objeto = Random.Range(6,12);
        TestManager.metricas.veces_devuelto_objeto = TestManager.metricas.veces_recogido_objeto - 6;
        TestManager.metricas.irse_sin_bolsa = Random.Range(0,5) < 4;
        TestManager.metricas.cantidad_segmentos_ruta = 41;
        TestManager.metricas.cantidad_segmentos_ruta_transitados = Random.Range(30,TestManager.metricas.cantidad_segmentos_ruta);
        TestManager.metricas.cantidad_segmentos_no_ruta = Mathf.RoundToInt((TestManager.metricas.cantidad_segmentos_ruta-TestManager.metricas.cantidad_segmentos_ruta_transitados)*Random.Range(1.0f,1.5f));
        TestManager.metricas.contador_cruces_invalidos = Random.Range(0,5);
        TestManager.metricas.contador_cruces_validos = Random.Range(0,5);
        TestManager.metricas.contador_transita_calle = Random.Range(0,15);

        SceneManager.LoadScene("ResultsScene");
    }
}
