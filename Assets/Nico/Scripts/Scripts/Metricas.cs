using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace nico
{

    public class Metricas
    {
        public float tiempo_total = 0; //Tiempo total del test
        public float tiempo_total_kiosko = 0; //Tiempo total en el kiosko
        public float tiempo_total_articulos = 0; //Tiempo total buscando articulos
        public float tiempo_total_caja = 0; //Tiempo total en la caja

        public float segundos_mirando_objetos_invalido = 0; //Segundos en que el AM esta mirando un objeto sin canasto
        public float segundos_mirando_objetos_lleno = 0; //Segundos en que el AM esta mirando un objeto con canasto lleno

        public int veces_recogido_objeto = 0; //Veces que el AM pone un objeto en la cesta
        public int veces_devuelto_objeto = 0; //Veces que el AM devuelve un objeto de la cesta

        public int veces_marcado_billete = 0; //Veces que el AM selecciona un billete
        public int veces_devuelto_billete = 0; //Veces que el AM devuelve un billete

        public int vuelto_final = 0;

        public Metricas()
        {

        }
    }
}