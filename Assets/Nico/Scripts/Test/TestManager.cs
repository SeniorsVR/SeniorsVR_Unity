using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.XR.Management;

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
            metricas = new Metricas();
            DontDestroyOnLoad(gameObject);
        }

        public static Metricas metricas;

        public static bool enTest = false;

        public static bool enIda = false;
        public static bool enVuelta = false;

        public static bool enKiosko = false;
        public static bool enCanasto = false;
        public static bool enArticulos = false;
        public static bool enCaja = false;
        public static bool enIrse = false; // Irse solo mimimarket


        private void Start()
        {
            StartCoroutine(StartXRCoroutine());

            TestManager.SetTestFlag(true);
            TestManager.SetIdaFlag(true);
        }

        private void Update()
        {
            if (enTest)
            {
                metricas.tiempo_total += Time.deltaTime;

                if (enIda)
                {
                    metricas.tiempo_total_ida += Time.deltaTime;
                }
                else if(enVuelta)
                {
                    metricas.tiempo_total_vuelta += Time.deltaTime;
                }

                if (enKiosko)
                {
                    metricas.tiempo_total_kiosko += Time.deltaTime;

                    if (enCanasto)
                    {
                        metricas.tiempo_total_canasto += Time.deltaTime;
                    }
                    if (enArticulos)
                    {
                        metricas.tiempo_total_articulos += Time.deltaTime;
                    }
                    if (enCaja)
                    {
                        metricas.tiempo_total_caja += Time.deltaTime;
                    }
                    if (enIrse)
                    {
                        metricas.tiempo_total_irse += Time.deltaTime;
                    }
                }
            }
        }

        private void OnEnable() {
            routeMarker.endSimEvent += finish;
        }

        private void OnDisable() {
            routeMarker.endSimEvent -= finish;
        }

        public void finish() {
            StopXR();
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
        }

        #region Metricas
        public static void SetTestFlag(bool state)
        {
            enTest = state;
        }
        public static void SetIdaFlag(bool state)
        {
            enIda = state;
        }
        public static void SetVueltaFlag(bool state)
        {
            enVuelta = state;
        }
        public static void SetKioskoFlag(bool state)
        {
            enKiosko = state;
        }
        public static void SetRecojerCanastoFlag(bool state)
        {
            enCanasto = state;
        }
        public static void SetArticulosFlag(bool state)
        {
            enArticulos = state;
        }
        public static void SetCajaFlag(bool state)
        {
            enCaja = state;
        }
        public static void SetIrseFlag(bool state)
        {
            enIrse = state;
        }

        public static void AddSecondsSeleccionableInvalido(float t)
        {
            metricas.segundos_mirando_objetos_invalido += t;
        }
        public static void AddSecondsSeleccionableLleno(float t)
        {
            metricas.segundos_mirando_objetos_lleno += t;
        }

        public static void AddVesRecojida(Articulo tipo)
        {
            metricas.veces_recogido_objeto++;
            EvaluateNewArticulo(tipo);
        }
        public static void AddVesDevuelto(Articulo tipo)
        {
            metricas.veces_devuelto_objeto++;
            EvaluateOldArticulo(tipo);
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
        public static void AddSecondsBagPickup(float t)
        {
            metricas.segundos_esperando_bolsa += t;
        }
        public static void SetBagPicked()
        {
            metricas.irse_sin_bolsa = false;
        }

        public static void ComputePaymentEfficiency(int amount, int nCoins)
        {
            int optimalCoins = ComputeMinPayment(amount);
            metricas.cantidad_minima_billetes = optimalCoins;

            metricas.numero_billetes_innecesarios = nCoins - optimalCoins;
        }
        public static void AddCruceInvalido()
        {
            metricas.contador_cruces_invalidos++;
        }
        public static void AddCruceValido()
        {
            metricas.contador_cruces_validos++;
        }

        public static void AddcontadorTransitaCalle(){
            metricas.contador_transita_calle++;
        }
        public static void AddSegmentosRuta(){
            metricas.cantidad_segmentos_ruta++;
        }
        public static void AddSegmentosRutaTransitados(){
            metricas.cantidad_segmentos_ruta_transitados++;
        }
        public static void AddSegmentosNoRutaTransitados(){
            metricas.cantidad_segmentos_no_ruta++;
        }
        public static void EvaluateArticulos()
        {
            Articulo[] listaObjetosCopy = new Articulo[metricas.objetos.Length];
            for (int i = 1; i < 6; i++)
            {
                listaObjetosCopy[i] = metricas.objetos[i];
            }

            Articulo[] basketObjetos = PlayerBasket.Instance.objetos;

            int validos = 0;

            foreach (Articulo articuloPlayer in basketObjetos)
            {

                for (int i = 1; i < 6; i++)
                {

                    Articulo articuloLista = listaObjetosCopy[i];

                    if (articuloPlayer == articuloLista)
                    {
                        validos++;
                        listaObjetosCopy[i] = Articulo.EMPTY;

                        break;
                    }
                }
            }

            metricas.articulos_validos = validos;
        }
        #endregion

        static void EvaluateNewArticulo(Articulo newArticulo)//Cuando recoje
        {
            Articulo[] listaObjetos = metricas.objetos;
            Articulo[] basketObjetos = PlayerBasket.Instance.objetos;

            int nNeeded = 0;
            int nCurrently = 0;

            for (int i = 0; i < 6; i++)
            {
                if (listaObjetos[i] == newArticulo)
                {
                    nNeeded++;
                }
                if (basketObjetos[i] == newArticulo)
                {
                    nCurrently++;
                }
            }

            if (nNeeded - nCurrently <= 0)
            {
                metricas.veces_objeto_innecesario_recojido++;
            }
        }

        static void EvaluateOldArticulo(Articulo oldArticulo)//Cuando devulve
        {
            Articulo[] listaObjetos = metricas.objetos;
            Articulo[] basketObjetos = PlayerBasket.Instance.objetos;

            int nNeeded = 0;
            int nCurrently = 0;

            for (int i = 0; i < 6; i++)
            {
                if (listaObjetos[i] == oldArticulo)
                {
                    nNeeded++;
                }
                if (basketObjetos[i] == oldArticulo)
                {
                    nCurrently++;
                }
            }

            if (nNeeded - nCurrently >= 0)
            {
                metricas.veces_objeto_necesario_devuelto++;
            }
        }
    
        static int ComputeMinPayment(int amount)
        {
            int[] coins = ObjetosConstants.coins;

            int[] dp = new int[amount + 1];
            Array.Fill(dp, int.MaxValue);
            dp[0] = 0;

            for (int i = 1; i <= amount; i++)
            {
                foreach (int coin in coins)
                {
                    if (i >= coin)
                    {
                        dp[i] = Mathf.Min(dp[i], dp[i - coin] + 1);
                    }
                }
            }

            return dp[amount] != int.MaxValue ? dp[amount] : -1;
        }

        public static void PrintInLog()
        {
            print("Tiempo total: " + metricas.tiempo_total);
            print("Tiempo total ida: " + metricas.tiempo_total_ida);
            print("Tiempo total vuelta: " + metricas.tiempo_total_vuelta);
            print("Tiempo kiosko: " + metricas.tiempo_total_kiosko);
            print("Tiempo recojer canasto: " + metricas.tiempo_total_canasto);
            print("Tiempo buscando articulos: " + metricas.tiempo_total_articulos);
            print("Tiempo en irse: " + metricas.tiempo_total_irse);
            print("Tiempo buscando articulos: " + metricas.tiempo_total_articulos);
            print("Tiempo mirnado invalido: " + metricas.segundos_mirando_objetos_invalido);
            print("Tiempo mirando lleno: " + metricas.segundos_mirando_objetos_lleno);
            print("Veces obj recojido: " + metricas.veces_recogido_objeto);
            print("Veces obj devuelto: " + metricas.veces_devuelto_objeto);
            print("Veces billete marcado: " + metricas.veces_marcado_billete);
            print("Veces billete devuelto: " + metricas.veces_devuelto_billete);
            print("Tiempo toma en recojer bolsa: " + metricas.segundos_esperando_bolsa);
            print("Vuelto: " + metricas.vuelto_final);
            print("Veces objeto innecesario recojido: " + metricas.veces_objeto_innecesario_recojido );
            print("Veces objeto necesario debuelto: " + metricas.veces_objeto_necesario_devuelto);
            print("Irse sin bolsa: " + metricas.irse_sin_bolsa);
            print("Billetes innecesarios: " + metricas.numero_billetes_innecesarios);
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
        public void cancelTest(){
            StopXR();
            SceneManager.LoadScene("CancelScene");
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

}