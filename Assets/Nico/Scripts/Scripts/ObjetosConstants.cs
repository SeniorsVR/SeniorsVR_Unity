using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace nico
{

    public class ObjetosConstants
    {
        public static Dictionary<Articulo, int> precios_articulos;

        public static int GetPrecioArticulo(Articulo articulo)
        {

            if (precios_articulos == null)
            {
                precios_articulos = new Dictionary<Articulo, int>();

                precios_articulos[Articulo.Bebida] = GetPrecioPorMonedas(0, 0, 0, 0, 0, 1, 0, 0, 0);//2000
                 precios_articulos[Articulo.Chorizo] = GetPrecioPorMonedas(0, 1, 2, 1, 0, 0, 0, 0, 0);//750
                precios_articulos[Articulo.Cordero] = GetPrecioPorMonedas(0, 0, 1, 1, 0, 1, 1, 0, 0);//7600
                precios_articulos[Articulo.Galleta] = GetPrecioPorMonedas(0, 0, 0, 0, 1, 0, 0, 0, 0);//1000
                precios_articulos[Articulo.Tomate] = GetPrecioPorMonedas(2, 1, 3, 0, 0, 0, 0, 0, 0);//370
            }

            return precios_articulos[articulo];
        }

        static int GetPrecioPorMonedas(int X, int L, int C, int D, int M, int MM, int V, int x, int xx)
        {
            int valor = X * 10 + L * 50 + C * 100 + D * 500 + M * 1000 + MM * 2000 + V * 5000 + x * 10000 + xx * 20000;

            return valor;
        }

        static int[] GetBilletesPorPrecio(int precio)
        {
            int xx = precio / 20000;
            precio -= xx * 20000;

            int x = precio / 10000;
            precio -= x * 10000;

            int V = precio / 5000;
            precio -= V * 5000;

            int MM = precio / 2000;
            precio -= MM * 2000;

            int M = precio / 1000;
            precio -= M * 1000;

            int D = precio / 500;
            precio -= D * 500;

            int C = precio / 100;
            precio -= C * 100;

            int L = precio / 50;
            precio -= L * 50;

            int X = precio / 10;
            precio -= X * 10;

            while (precio > 0)
            {
                X++;
                precio -= 10;
            }

            return new int[] {X, L, C, D, M, MM, V, x, xx, precio};
        }
    }
}