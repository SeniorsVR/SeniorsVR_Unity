using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

namespace nico
{
    [System.Serializable]
    public class Metricas
    {
        public float tiempo_total = 0; //Tiempo total del test

        public float tiempo_total_ida = 0; //Tiempo total ida del test
        public float tiempo_total_vuelta = 0; //Tiempo total veulta del test

        public float tiempo_total_kiosko = 0; //Tiempo total en el kiosko
        public float tiempo_total_canasto = 0; //Tiempo total en recojer canastos
        public float tiempo_total_articulos = 0; //Tiempo total buscando articulos
        public float tiempo_total_caja = 0; //Tiempo total en la caja
        public float tiempo_total_irse = 0; //Tiempo total en salir del minimarket

        public float segundos_mirando_objetos_invalido = 0; //Segundos en que el AM esta mirando un objeto sin canasto
        public float segundos_mirando_objetos_lleno = 0; //Segundos en que el AM esta mirando un objeto con canasto lleno

        public int veces_recogido_objeto = 0; //Veces que el AM pone un objeto en la cesta
        public int veces_devuelto_objeto = 0; //Veces que el AM devuelve un objeto de la cesta

        public int veces_marcado_billete = 0; //Veces que el AM selecciona un billete
        public int veces_devuelto_billete = 0; //Veces que el AM devuelve un billete

        public float segundos_esperando_bolsa = 0; //Segundos en que el AM tarda en recojer la bolsa

        public int vuelto_final = 0; //El vuelto final de la compra, puede ser positivo o negativo

        public int veces_objeto_innecesario_recojido = 0; //Veces en las que el AM recoje un objeto que no necesita, ya sea que no esta en la lista o que ya fue cubierto
        public int veces_objeto_necesario_devuelto = 0; //Veces en las que el AM devuelve un objeto que si necesitaba

        public bool irse_sin_bolsa = true; // Si se fue sin la bolsa de productos

        public int numero_billetes_innecesarios = 0; // Cantidad de billetes extras con los que pago en comparacion al optimo

        public int articulos_validos = 0; //Cantidad de articulos que si se pedian

        public int contador_cruces_invalidos = 0; // Cantidad cruces invalidos
        public int contador_cruces_validos = 0; // Cantidad cruces invalidos
        public int contador_transita_calle = 0;
        public int cantidad_segmentos_ruta = 0;
        public int cantidad_segmentos_ruta_transitados = 0;
        public int cantidad_segmentos_no_ruta = 0;

        public int cantidad_minima_billetes = 0;

        public Articulo[] objetos = new Articulo[6]; // Lista de objetos que se pide

        public Metricas()
        {
        }

        public Articulo[] registrarLista(Dictionary <string, int> lista)
        {
            int k = 0;
            foreach( KeyValuePair<string, int> kvp in lista ) {
                switch (kvp.Key){
                    case "Bebida":
                        for(int i = 0; i < kvp.Value; i++){
                            objetos[k] = Articulo.Bebida;
                            k++;
                        }
                        break;
                    case "Vienesa":
                        for(int i = 0; i < kvp.Value; i++){
                            objetos[k] = Articulo.Chorizo;
                            k++;
                        }
                        break;
                    case "Carne":
                        for(int i = 0; i < kvp.Value; i++){
                            objetos[k] = Articulo.Cordero;
                            k++;
                        }
                        break;
                    case "Galleta":
                        for(int i = 0; i < kvp.Value; i++){
                            objetos[k] = Articulo.Galleta;
                            k++;
                        }
                        break;
                    case "Tomate":
                        for(int i = 0; i < kvp.Value; i++){
                            objetos[k] = Articulo.Tomate;
                            k++;
                        }
                        break;
                }
            }

            return objetos;
        }

        public float ComputeGeneralScore() //mas positivo es bueno
        {

            float interaccion_score = 6f / veces_recogido_objeto;
            float billetes_score = cantidad_minima_billetes / (veces_marcado_billete + veces_devuelto_billete);
            float correctos_score = articulos_validos / 6f;
            float pago_score = 1;

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

            Convert.ToInt32(irse_sin_bolsa) *

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
            return 1;
        }

    }
}