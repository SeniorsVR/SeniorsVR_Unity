using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ButtonInformacionGrafico : MonoBehaviour
{
    public GraphRegresion graphRegresion;
    public GameObject popup;

    TextMeshProUGUI textTittle;
    TextMeshProUGUI textDesc;

    GraphRegresionTipo tipo;

    private void Start()
    {
        TextMeshProUGUI[] texts = popup.GetComponentsInChildren<TextMeshProUGUI>();

        textTittle = texts[0];
        textDesc = texts[1];
    }

    public void Press()
    {

        tipo = graphRegresion.tipo;

        popup.SetActive(true);

        string titulo = "Titulo";
        string desc = "Descripcion";

        switch (tipo)
        {
            case GraphRegresionTipo.Global:
                titulo = "Puntaje global";
                desc = "Puntaje obtenido usando todas las m�tricas recogidas del test.";
                break;

            case GraphRegresionTipo.Navegacion:
                titulo = "Puntaje de navegaci�n";
                desc = "Puntaje obtenido usando las m�tricas relacionadas a la navegaci�n por el entorno.";
                break;

            case GraphRegresionTipo.Seguridad:
                titulo = "Puntaje de seguridad";
                desc = "Puntaje obtenido usando las m�tricas relacionadas a que tanto se respetaron las reglas de transito peatonales.";
                break;

            case GraphRegresionTipo.Ejecutiva:
                titulo = "Puntaje global";
                desc = "Puntaje obtenido usando las m�tricas relacionadas a la correcta manipulaci�n de objetos dentro del kiosco, tales como los art�culos a comprar y el pago realizado.";
                break;


            case GraphRegresionTipo.IdaVuelta:
                titulo = "Ida / Vuelta";
                desc = "Puntaje obtenido usando el ratio entre el tiempo de ida al kiosco y el tiempo de regreso.";
                break;

            case GraphRegresionTipo.Completitud:
                titulo = "Completitud de ruta";
                desc = "Puntaje obtenido usando el ratio entre la cantidad de segmentos recorridos de la ruta �ptima y el total de segmentos que posee.";
                break;

            case GraphRegresionTipo.Desvio:
                titulo = "Desv�o de ruta";
                desc = "Puntaje obtenido usando el ratio entre el total de segmentos en la ruta �ptima y la cantidad de segmentos recorrida.";
                break;


            case GraphRegresionTipo.CrucesValidos:
                titulo = "Tasa de cruces correctos";
                desc = "Puntaje obtenido usando el ratio entre los correctos cruces en luz verde y la cantidad total de estos.";
                break;

            case GraphRegresionTipo.Transito:
                titulo = "Transito peatonal correcto";
                desc = "Puntaje obtenido usando el ratio entre el total de segmentos en la ruta �ptima y la suma de la cantidad de veces que cruzo hacia la calle cuando no deb�a y el total de segmentos de la ruta �ptima.";
                break;


            case GraphRegresionTipo.Dinero:
                titulo = "Manejo de dinero";
                desc = "Puntaje obtenido usando el ratio entre la cantidad de monedas y billetes con los que realizo el pago y la cantidad m�nima �ptima de estos.";
                break;

            case GraphRegresionTipo.Productos:
                titulo = "Manejo de productos";
                desc = "Puntaje obtenido usando el ratio entre la cantidad de veces que recogi� y devolvi� un objeto y la cantidad �ptima de acciones que se deb�an realizar.";
                break;

            case GraphRegresionTipo.Compra:
                titulo = "Compra de productos pedidos";
                desc = "Puntaje obtenido usando el ratio entre la cantidad de objetos comprados correctos y el total de estos.";
                break;

            case GraphRegresionTipo.Precision:
                titulo = "Precisi�n de pago";
                desc = "Puntaje obtenido usando el vuelto, es decir, por cuanto se pas� o le falto para alcanzar la cantidad exacta.";
                break;

            case GraphRegresionTipo.Rapidez:
                titulo = "Rapidez de compra";
                desc = "Puntaje obtenido usando el ratio entre el tiempo total del test y la suma del tiempo dentro del kiosco y del test.";
                break;

            case GraphRegresionTipo.Bolsa:
                titulo = "Se lleva los productos";
                desc = "Puntaje obtenido considerando si recogi� los art�culos que compro antes de irse.";
                break;
        }

        textTittle.text = titulo;
        textDesc.text = desc;

    }
}
