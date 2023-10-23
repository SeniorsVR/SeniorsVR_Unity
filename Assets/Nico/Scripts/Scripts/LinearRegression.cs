using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LinearRegression
{
    public Vector2[] dataPoints; // Array of Vector2 data points
    public double slope;
    public double intercept;

    public LinearRegression(Vector2[] data)
    {
        dataPoints = data;
        CalculateLinearRegression();
    }

    private void CalculateLinearRegression()
    {
        // Separate x and y values
        var xValues = new List<float>();
        var yValues = new List<float>();

        foreach (var vec in dataPoints)
        {
            //Debug.Log(vec);

            xValues.Add(vec[0]);
            yValues.Add(vec[1]);
        }

        // Calculate the mean of x and y
        float xMean = CalculateMean(xValues);
        float yMean = CalculateMean(yValues);

        //Debug.Log("xMean: " + xMean);
        //Debug.Log("yMean: " + yMean);

        // Calculate the slope (m) and intercept (b)
        float numerator = 0;
        float denominator = 0;

        for (int i = 0; i < dataPoints.Length; i++)
        {
            float xDiff = xValues[i] - xMean;
            float yDiff = yValues[i] - yMean;

            numerator += xDiff * yDiff;
            denominator += xDiff * xDiff;

            //Debug.Log(xValues[i] + " - " + xMean + " = " + xDiff + " = " + (xValues[i] - xMean));
        }

        //Debug.Log("numerator: " + numerator);
        //Debug.Log("denominator: " + denominator);

        slope = numerator / denominator;
        intercept = yMean - slope * xMean;

        //Debug.Log("slope: " + slope);
        //Debug.Log("intercept: " + intercept);
    }

    public double PredictLinearRegression(float x)
    {
        return slope * x + intercept;
    }

    private float CalculateMean(List<float> values)
    {
        float sum = 0;
        foreach (var value in values)
        {
            sum += value;
        }
        return sum / values.Count;
    }
}
