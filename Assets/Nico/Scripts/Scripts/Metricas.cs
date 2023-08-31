using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace nico
{

    public class Metricas
    {
        public float tiempo_total = 0; //Tiempo total del test
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

        public int contador_cruces_invalidos = 0; // Cantidad cruces invalidos
        public int contador_cruces_validos = 0; // Cantidad cruces invalidos
        public int contador_transita_calle = 0;
        public int cantidad_segmentos_ruta = 0;
        public int cantidad_segmentos_ruta_transitados = 0;
        public int cantidad_segmentos_no_ruta = 0;

        public Articulo[] objetos = new Articulo[6]; // Lista de objetos que se pide

        public Metricas()
        {
            InitList();
        }

        void InitList()
        {
            objetos[0] = Articulo.Bebida;
            objetos[1] = Articulo.Chorizo;
            objetos[2] = Articulo.Chorizo;
            objetos[3] = Articulo.Cordero;
            objetos[4] = Articulo.Galleta;
            objetos[5] = Articulo.Tomate;
        }

    }
}