using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace nico
{
    public class TestManager : MonoBehaviour
    {
        public static TestManager Instance;

        private void Awake()
        {
            if (Instance != null)
            {
                Destroy(Instance.gameObject);
            }

            Instance = this;
        }

        public static Metricas metricas;

        public static bool enKiosko = false;
        public static bool enArticulos = false;
        public static bool enCaja = false;


        private void Start()
        {
            metricas = new Metricas();


            TestManager.SetKioskoFlag(true);//debug
        }

        private void Update()
        {
            if (enKiosko)
            {
                metricas.tiempo_total_kiosko += Time.deltaTime;

                if (enArticulos)
                {
                    metricas.tiempo_total_articulos += Time.deltaTime;
                }
                if (enCaja)
                {
                    metricas.tiempo_total_caja += Time.deltaTime;
                }
            }
        }

        #region Metricas
        public static void SetKioskoFlag(bool state)
        {
            enKiosko = state;
        }
        public static void SetArticulosFlag(bool state)
        {
            enArticulos = state;
        }
        public static void SetCajaFlag(bool state)
        {
            enCaja = state;
        }

        public static void AddSecondsSeleccionableInvalido(float t)
        {
            metricas.segundos_mirando_objetos_invalido += t;
        }
        public static void AddSecondsSeleccionableLleno(float t)
        {
            metricas.segundos_mirando_objetos_lleno += t;
        }

        public static void AddVesRecojida()
        {
            metricas.veces_recogido_objeto++;
        }
        public static void AddVesDevuelto()
        {
            metricas.veces_devuelto_objeto++;
        }

        public static void AddVesMarcadoBillete()
        {
            metricas.veces_marcado_billete++;
        }
        public static void AddVesDevueltoBillete()
        {
            metricas.veces_devuelto_billete++;
        }

        public static void AddVueltoFinal(int vuelto)
        {
            metricas.vuelto_final = vuelto;
        }
        #endregion
    }
}