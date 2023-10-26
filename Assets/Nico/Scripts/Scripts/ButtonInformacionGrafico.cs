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
                desc = "Puntaje obtenido usando todas las métricas recogidas del test.";
                break;

            case GraphRegresionTipo.Navegacion:
                titulo = "Puntaje de navegación";
                desc = "Puntaje obtenido usando las métricas relacionadas a la navegación por el entorno.";
                break;

            case GraphRegresionTipo.Seguridad:
                titulo = "Puntaje de seguridad";
                desc = "Puntaje obtenido usando las métricas relacionadas a que tanto se respetaron las reglas de transito peatonales.";
                break;

            case GraphRegresionTipo.Ejecutiva:
                titulo = "Puntaje de ejecución";
                desc = "Puntaje obtenido usando las métricas relacionadas a la correcta manipulación de objetos dentro del kiosco, tales como los artículos a comprar y el pago realizado.";
                break;


            case GraphRegresionTipo.IdaVuelta:
                titulo = "Ida / Vuelta";
                desc = "Puntaje obtenido usando el ratio entre el tiempo de ida al kiosco y el tiempo de regreso.";
                break;

            case GraphRegresionTipo.Completitud:
                titulo = "Completitud de ruta";
                desc = "Puntaje obtenido usando el ratio entre la cantidad de segmentos recorridos de la ruta óptima y el total de segmentos que posee.";
                break;

            case GraphRegresionTipo.Desvio:
                titulo = "Desvío de ruta";
                desc = "Puntaje obtenido usando el ratio entre el total de segmentos en la ruta óptima y la cantidad de segmentos recorrida.";
                break;


            case GraphRegresionTipo.CrucesValidos:
                titulo = "Tasa de cruces correctos";
                desc = "Puntaje obtenido usando el ratio entre los correctos cruces en luz verde y la cantidad total de estos.";
                break;

            case GraphRegresionTipo.Transito:
                titulo = "Transito peatonal correcto";
                desc = "Puntaje obtenido usando el ratio entre el total de segmentos en la ruta óptima y la suma de la cantidad de veces que cruzo hacia la calle cuando no debía y el total de segmentos de la ruta óptima.";
                break;


            case GraphRegresionTipo.Dinero:
                titulo = "Manejo de dinero";
                desc = "Puntaje obtenido usando el ratio entre la cantidad de monedas y billetes con los que realizo el pago y la cantidad mínima óptima de estos.";
                break;

            case GraphRegresionTipo.Productos:
                titulo = "Manejo de productos";
                desc = "Puntaje obtenido usando el ratio entre la cantidad de veces que recogió y devolvió un objeto y la cantidad óptima de acciones que se debóan realizar.";
                break;

            case GraphRegresionTipo.Compra:
                titulo = "Compra de productos pedidos";
                desc = "Puntaje obtenido usando el ratio entre la cantidad de objetos comprados correctos y el total de estos.";
                break;

            case GraphRegresionTipo.Precision:
                titulo = "Precisión de pago";
                desc = "Puntaje obtenido usando el vuelto, es decir, por cuanto se pasó o le falto para alcanzar la cantidad exacta.";
                break;

            case GraphRegresionTipo.Rapidez:
                titulo = "Rapidez de compra";
                desc = "Puntaje obtenido usando el ratio entre el tiempo total del test y la suma del tiempo dentro del kiosco y del test.";
                break;

            case GraphRegresionTipo.Bolsa:
                titulo = "Se lleva los productos";
                desc = "Puntaje obtenido considerando si recogió los artículos que compro antes de irse.";
                break;
        }

        textTittle.text = titulo;
        textDesc.text = desc;

    }
}
