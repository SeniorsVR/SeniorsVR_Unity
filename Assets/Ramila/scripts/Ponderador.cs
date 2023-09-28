using System;
using nico;

public static class Ponderador {
    public static float ComputeNavigationScore(Metricas metricas) {
        Settings settings = SaveSystem.loadSettings();
        float idavueltatiempo_score = (metricas.tiempo_total_ida / (metricas.tiempo_total_vuelta + metricas.tiempo_total_ida))*settings.GetValue(Settings.indices.tiempoIda_vuelta);
        float completitud_score = ((float) metricas.cantidad_segmentos_ruta_transitados / (float) metricas.cantidad_segmentos_ruta)*settings.GetValue(Settings.indices.completitud_ruta);
        float desvio_score = ((float) metricas.cantidad_segmentos_ruta / (float) (metricas.cantidad_segmentos_no_ruta + metricas.cantidad_segmentos_ruta))*settings.GetValue(Settings.indices.desvio_ruta);
        return (idavueltatiempo_score + completitud_score + desvio_score)*100.0f;
    }

    public static float ComputeSafetyScore(Metricas metricas) {
        Settings settings = SaveSystem.loadSettings();
        float cruces_score = ((float) metricas.contador_cruces_validos / (float) (metricas.contador_cruces_validos + metricas.contador_cruces_invalidos))*settings.GetValue(Settings.indices.crucesVerde_roja);
        float transitoInseguro_score = ((float) metricas.cantidad_segmentos_ruta / (float)(metricas.contador_transita_calle+metricas.cantidad_segmentos_ruta))*settings.GetValue(Settings.indices.transito_inseguro);
        return (cruces_score + transitoInseguro_score)*100.0f;
    }

    public static float ComputeExecutionScore(Metricas metricas) { // hiiii ^.^
        Settings settings = SaveSystem.loadSettings();
        float billetes_score = ((float) metricas.cantidad_minima_billetes / (float) (metricas.veces_marcado_billete + metricas.veces_devuelto_billete))*settings.GetValue(Settings.indices.efectividad_billetes);
        float interaccion_score = (6.0f / (float) metricas.veces_recogido_objeto)*settings.GetValue(Settings.indices.efectividad_productos);
        float correctos_score = ((float) metricas.articulos_validos / 6.0f)*settings.GetValue(Settings.indices.efectividad_compra);
        float pago_score = (1.0f/(1.0f+ Math.Abs(metricas.vuelto_final)))*settings.GetValue(Settings.indices.precision_compra);
        float compratiempo_score = ((float) metricas.tiempo_total/ (float) (metricas.tiempo_total+metricas.tiempo_total_kiosko))*settings.GetValue(Settings.indices.tiempo_compra);
        float bolsa_score = (float) Convert.ToInt32(metricas.irse_sin_bolsa)*settings.GetValue(Settings.indices.se_llevo);
        return (billetes_score + interaccion_score + correctos_score + pago_score + bolsa_score + compratiempo_score)*100.0f;
    }
    public static float ComputeGeneralScore(Metricas metricas) {
        float score = ComputeNavigationScore(metricas)+ComputeExecutionScore(metricas)+ComputeSafetyScore(metricas);
        return score;
    }

    public static float GetScoreForIndex(int indice, Metricas metricas){
        Settings settings = SaveSystem.loadSettings();
        switch(indice){
            case 0:
                return (metricas.tiempo_total_ida / (metricas.tiempo_total_vuelta + metricas.tiempo_total_ida))*settings.GetValue(Settings.indices.tiempoIda_vuelta);
            case 1:
                return ((float) metricas.cantidad_segmentos_ruta_transitados / (float) metricas.cantidad_segmentos_ruta)*settings.GetValue(Settings.indices.completitud_ruta);
            case 2:
                return ((float) metricas.cantidad_segmentos_ruta / (float) (metricas.cantidad_segmentos_no_ruta + metricas.cantidad_segmentos_ruta))*settings.GetValue(Settings.indices.desvio_ruta);
            case 3:
                return ((float) metricas.contador_cruces_validos / (float) (metricas.contador_cruces_validos + metricas.contador_cruces_invalidos))*settings.GetValue(Settings.indices.crucesVerde_roja);
            case 4:
                return ((float) metricas.cantidad_segmentos_ruta / (float)(metricas.contador_transita_calle+metricas.cantidad_segmentos_ruta))*settings.GetValue(Settings.indices.transito_inseguro);
            case 5:
                return ((float) metricas.cantidad_minima_billetes / (float) (metricas.veces_marcado_billete + metricas.veces_devuelto_billete))*settings.GetValue(Settings.indices.efectividad_billetes);
            case 6:
                return (6.0f / (float) metricas.veces_recogido_objeto)*settings.GetValue(Settings.indices.efectividad_productos);
            case 7:
                return ((float) metricas.articulos_validos / 6.0f)*settings.GetValue(Settings.indices.efectividad_compra);
            case 8:
                return (1.0f/(1.0f+ Math.Abs(metricas.vuelto_final)))*settings.GetValue(Settings.indices.precision_compra);
            case 9:
                return ((float) metricas.tiempo_total/ (float) (metricas.tiempo_total+metricas.tiempo_total_kiosko))*settings.GetValue(Settings.indices.tiempo_compra);
            case 10:
                return (float) Convert.ToInt32(metricas.irse_sin_bolsa)*settings.GetValue(Settings.indices.se_llevo);
        }
        return 0.0f;
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
