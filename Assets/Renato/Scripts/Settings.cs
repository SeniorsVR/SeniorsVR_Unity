using System.Collections.Generic;
using TMPro;
using System;
using UnityEngine;

[System.Serializable]
public class Settings {
    private float[] values;
    public enum indices{
        tiempoIda_vuelta,
        completitud_ruta,
        desvio_ruta, //vs largo ruta
        crucesVerde_roja,
        transito_inseguro, //vs largo ruta
        efectividad_billetes,
        efectividad_productos,
        efectividad_compra,
        precision_compra,
        tiempo_compra, //vs tiempo total
        se_llevo,
        r,
        s,
    }

    public Settings() {
        values = new float[13];
        for(int i = 0; i < 11; i++){
            values[i] = 1.0f;
        }
        values[11] = 0.5f;
        values[12] = 50.0f;
    }
    public Settings(float[] values) {
        this.values = new float[13];
        this.values = values;
    }

    public float[] GetValues() {
        return values;
    }

    public float GetValue(indices indice) {
        return values[(int)indice];
    }

    public void SetValues(float[] values) {
        this.values = values;
    }

    public void setValue(int indice,float value){
        values[indice] = value;
    }
}