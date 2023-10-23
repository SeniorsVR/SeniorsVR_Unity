using System.Collections;
using System.Collections.Generic;
using System.Threading.Tasks;
using TMPro;
using UnityEngine;

public class GraphRegresion : MonoBehaviour
{
    public enum GraphRegresionTipo
    {
        Global,
        Navegacion,
        Seguridad,
        Ejecutiva,
    }

    public TextMeshProUGUI text;
    public GraphRegresionTipo tipo;

    string stringTipo = "global";
    string formattedText = "cargando";

    // Start is called before the first frame update
    void Start()
    {
        Task task = Task.Run(() => FillText());
        Task.WhenAll(task).Wait();
        text.text = formattedText;
    }


    void FillText()
    {
        Vector2[] data;
        switch (tipo)
        {
            case GraphRegresionTipo.Global:
                data = Graphics.get2DData(11);
                stringTipo = "global";
                break;
            case GraphRegresionTipo.Navegacion:
                data = Graphics.get2DData(12);
                stringTipo = "de navegacion";
                break;
            case GraphRegresionTipo.Seguridad:
                data = Graphics.get2DData(13);
                stringTipo = "de seguridad ";
                break;
            case GraphRegresionTipo.Ejecutiva:
                data = Graphics.get2DData(14);
                stringTipo = "ejecutivo";
                break;
            default:
                data = new Vector2[1];
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
