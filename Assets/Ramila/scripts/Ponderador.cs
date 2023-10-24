using System;
using nico;
using UnityEngine;

public static class Ponderador {
    public static float ComputeNavigationScore(Metricas metricas, Settings settings) {
        float idavueltatiempo_score = (metricas.tiempo_total_ida / (metricas.tiempo_total_vuelta + metricas.tiempo_total_ida))*settings.GetValue(Settings.indices.tiempoIda_vuelta);
        float completitud_score = ((float) metricas.cantidad_segmentos_ruta_transitados / (float) metricas.cantidad_segmentos_ruta)*settings.GetValue(Settings.indices.completitud_ruta);
        float desvio_score = ((float) metricas.cantidad_segmentos_ruta / (float) (metricas.cantidad_segmentos_no_ruta + metricas.cantidad_segmentos_ruta))*settings.GetValue(Settings.indices.desvio_ruta);

        float score = (idavueltatiempo_score + completitud_score + desvio_score) * 100.0f;
        if (float.IsNaN(score)) Debug.LogError("score is NaN or another weird value.");
        return score;
    }

    public static float ComputeSafetyScore(Metricas metricas, Settings settings) {
        float cruces_score = ((float) metricas.contador_cruces_validos / (float) (metricas.contador_cruces_validos + metricas.contador_cruces_invalidos))*settings.GetValue(Settings.indices.crucesVerde_roja);
        float transitoInseguro_score = ((float) metricas.cantidad_segmentos_ruta / (float)(metricas.contador_transita_calle+metricas.cantidad_segmentos_ruta))*settings.GetValue(Settings.indices.transito_inseguro);

        float score = (cruces_score + transitoInseguro_score) * 100.0f;
        if (float.IsNaN(score)) Debug.LogError("score is NaN or another weird value.");
        return score;
    }

    public static float ComputeExecutionScore(Metricas metricas, Settings settings) { // hiiii ^.^; FUCK U!!!; 
        float billetes_score = ((float) metricas.cantidad_minima_billetes / ((float) (metricas.veces_marcado_billete + metricas.veces_devuelto_billete) + 0.001f))*settings.GetValue(Settings.indices.efectividad_billetes);
        float interaccion_score = (6.0f / (float) metricas.veces_recogido_objeto + 0.001f) *settings.GetValue(Settings.indices.efectividad_productos);
        float correctos_score = ((float) metricas.articulos_validos / 6.0f)*settings.GetValue(Settings.indices.efectividad_compra);
        float pago_score = (1.0f/(1.0f+ Math.Abs(metricas.vuelto_final)))*settings.GetValue(Settings.indices.precision_compra);
        float compratiempo_score = ((float) metricas.tiempo_total/ (float) (metricas.tiempo_total+metricas.tiempo_total_kiosko))*settings.GetValue(Settings.indices.tiempo_compra);
        float bolsa_score = (float) Convert.ToInt32(metricas.irse_sin_bolsa)*settings.GetValue(Settings.indices.se_llevo);

        float score = (billetes_score + interaccion_score + correctos_score + pago_score + bolsa_score + compratiempo_score) * 100.0f;
        if (float.IsNaN(score)) Debug.LogError("score is NaN or another weird value.");

        return score;
    }
    public static float ComputeGeneralScore(Metricas metricas, Settings settings) {
        float score = ComputeNavigationScore(metricas, settings) +ComputeExecutionScore(metricas, settings) +ComputeSafetyScore(metricas, settings);
        if (float.IsNaN(score)) Debug.LogError("score is NaN or another weird value.");
        return score;
    }

    public static float GetScoreForIndex(int indice, Metricas metricas, Settings settings)
    {
        float value = 0.0f;
        switch(indice){
            case 0:
                value = (metricas.tiempo_total_ida / (metricas.tiempo_total_vuelta + metricas.tiempo_total_ida))*settings.GetValue(Settings.indices.tiempoIda_vuelta);
                break;
            case 1:
                value = ((float) metricas.cantidad_segmentos_ruta_transitados / (float) metricas.cantidad_segmentos_ruta)*settings.GetValue(Settings.indices.completitud_ruta);
                break;
            case 2:
                value = ((float) metricas.cantidad_segmentos_ruta / (float) (metricas.cantidad_segmentos_no_ruta + metricas.cantidad_segmentos_ruta))*settings.GetValue(Settings.indices.desvio_ruta);
                break;
            case 3:
                value = ((float) metricas.contador_cruces_validos / (float) (metricas.contador_cruces_validos + metricas.contador_cruces_invalidos))*settings.GetValue(Settings.indices.crucesVerde_roja);
                break;
            case 4:
                value = ((float) metricas.cantidad_segmentos_ruta / (float)(metricas.contador_transita_calle+metricas.cantidad_segmentos_ruta))*settings.GetValue(Settings.indices.transito_inseguro);
                break;
            case 5:
                value = ((float) metricas.cantidad_minima_billetes / ((float) (metricas.veces_marcado_billete + metricas.veces_devuelto_billete) + 0.001f))*settings.GetValue(Settings.indices.efectividad_billetes);
                break;
            case 6:
                value = (6.0f / (float) metricas.veces_recogido_objeto +0.001f)*settings.GetValue(Settings.indices.efectividad_productos);
                break;
            case 7:
                value = ((float) metricas.articulos_validos / 6.0f)*settings.GetValue(Settings.indices.efectividad_compra);
                break;
            case 8:
                value = (1.0f/(1.0f+ Math.Abs(metricas.vuelto_final)))*settings.GetValue(Settings.indices.precision_compra);
                break;
            case 9:
                value = ((float) metricas.tiempo_total/ (float) (metricas.tiempo_total+metricas.tiempo_total_kiosko))*settings.GetValue(Settings.indices.tiempo_compra);
                break;
            case 10:
                value = (float) Convert.ToInt32(metricas.irse_sin_bolsa)*settings.GetValue(Settings.indices.se_llevo);
                break;
        }
        if (float.IsNaN(value)) Debug.LogError("value is NaN or another weird value.");
        return value;
    }
}


/**float score =
        tiempo_total_ida / (60f * 15f) > 1 ? -0.5f : 0 +
        tiempo_total_vuelta / (60f * 5) > 1 ? -0.5f : 0 +
        tiempo_total_kiosko / (60f * 5) > 1 ? -0.5f : 0 +
        tiempo_total_canasto / (60f * 0.33) > 1 ? -0.5f : 0 +
        tiempo_total_articulos / (60f * 2.33) > 1 ? -0.5f : 0 +
        tiempo_total_caja / (60f * 2) > 1 ? -0.5f : 0 +
        tiempo_total_irse / (60f * 0.33) > 1 ? -0.5f : 0 +
        segundos_mirando_objetos_invalido / (10f) > 1 ? -0.5f : 0 +
        segundos_mirando_objetos_lleno / (5f) > 1 ? -0.5f : 0 +
        veces_recogido_objeto > 6 ? -0.25f : 0 +
        veces_devuelto_objeto > 1 ? -0.25f : 0 +
        veces_marcado_billete > cantidad_minima_billetes ? -0.25f : 0 +
        veces_devuelto_billete > 0 ? -0.25f : 0 +
        segundos_esperando_bolsa > cantidad_minima_billetes ? -0.25f : 0 +
        vuelto_final *
        veces_objeto_innecesario_recojido *
        veces_objeto_necesario_devuelto *
         *
        numero_billetes_innecesarios *
        articulos_validos *
        contador_cruces_invalidos *
        contador_cruces_validos *
        contador_transita_calle *
        cantidad_segmentos_ruta *
        cantidad_segmentos_ruta_transitados *
        cantidad_segmentos_no_ruta *
        1;
        return score;**/
