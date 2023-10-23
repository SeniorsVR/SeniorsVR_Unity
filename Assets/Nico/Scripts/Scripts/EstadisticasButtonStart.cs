using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EstadisticasButtonStart : MonoBehaviour
{
    public int simulacionesMinimasParaSerVisibleLol = 0;

    void Start()
    {
        string profile = ProfileScene.GetSelectedProfile();
        Simulation[] simulations = SaveSystem.LoadSimulations(profile);
        if (simulations.Length < simulacionesMinimasParaSerVisibleLol)
        {
            gameObject.SetActive(false);
            print("Boton deshabilitado por no haber suficientes simulaciones");
        }
    }
}
