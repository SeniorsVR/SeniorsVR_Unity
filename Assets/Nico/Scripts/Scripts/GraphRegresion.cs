using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using TMPro;
using UnityEngine;

public enum GraphRegresionTipo
{
    Global = 11,
    Navegacion = 12,
    Seguridad = 13,
    Ejecutiva = 14,

    IdaVuelta = 0,
    Completitud = 1,
    Desvio = 2,

    CrucesValidos = 3,
    Transito = 4,

    Dinero = 5,
    Productos = 6,
    Compra = 7,
    Precision = 8,
    Rapidez = 9,
    Bolsa = 10,

}

public class GraphRegresion : MonoBehaviour
{

    public TextMeshProUGUI text;
    public GraphRegresionTipo tipo;

    string stringTipo = "global";
    string formattedText = "cargando";

    public void SetGraphDescription(int idMetrica)
    {
        tipo = (GraphRegresionTipo)idMetrica;
        Task task = Task.Run(() => FillText(tipo));
        Task.WhenAll(task).Wait();
        text.text = formattedText;
    }


    void FillText(GraphRegresionTipo tipo)
    {
        Vector2[] data = Graphics.get2DData((int)tipo);
        switch (tipo)
        {
            case GraphRegresionTipo.Global:
                stringTipo = "global";
                break;
            case GraphRegresionTipo.Navegacion:
                stringTipo = "de navegacion";
                break;
            case GraphRegresionTipo.Seguridad:
                stringTipo = "de seguridad peatonal";
                break;
            case GraphRegresionTipo.Ejecutiva:
                stringTipo = "de función ejecutivo";
                break;

            case GraphRegresionTipo.IdaVuelta:
                stringTipo = "ida y vuelta";
                break;
            case GraphRegresionTipo.Completitud:
                stringTipo = "completitud de ruta";
                break;
            case GraphRegresionTipo.Desvio:
                stringTipo = "desvío de ruta";
                break;

            case GraphRegresionTipo.CrucesValidos:
                stringTipo = "de cruces correctos";
                break;
            case GraphRegresionTipo.Transito:
                stringTipo = "de tránsito peatonal";
                break;

            case GraphRegresionTipo.Dinero:
                stringTipo = "de manejo de dinero";
                break;
            case GraphRegresionTipo.Productos:
                stringTipo = "de manejo de productos";
                break;
            case GraphRegresionTipo.Compra:
                stringTipo = "de compra correcta";
                break;
            case GraphRegresionTipo.Precision:
                stringTipo = "de precisión de pago";
                break;
            case GraphRegresionTipo.Rapidez:
                stringTipo = "de rapidez de compra";
                break;
            case GraphRegresionTipo.Bolsa:
                stringTipo = "de recolección de productos";
                break;
        }

        LinearRegression linearRegression = new LinearRegression(data);

        string newText = "La tendencia de puntaje {0} es de:\n{1} puntos por día\n\nSe espera que en una semana desde el último test su puntaje sea de:\n{2} puntos";

        float pointsInDay = Mathf.RoundToInt((float)linearRegression.slope);
        string dayString = pointsInDay.ToString();
        if (pointsInDay >= 0)
        {
            dayString = "+" + dayString;
        }

        float pointsInAWeek = Mathf.RoundToInt((float)linearRegression.PredictLinearRegression(data[data.Length-1][0]+7));
        string weekString = pointsInAWeek.ToString();
        if (pointsInAWeek >= 0)
        {
            weekString = "+" + weekString;
        }

        formattedText = string.Format(newText, stringTipo, dayString, weekString);
    }

}
