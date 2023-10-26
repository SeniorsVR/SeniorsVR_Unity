using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;
using UnityEngine.SceneManagement;
using UnityEngine.Tilemaps;

public class Graphics : MonoBehaviour {
    public GameObject dot, plotObjects;
    public TMP_Text profileText;
    private RectTransform labelTemplateX, labelTemplateY1, labelTemplateY2, labelTemplateY3;
    private RectTransform dashTemplateX, dashTemplateY;
    private static string currentProfile;
    private Profile profile;
    private Vector2[] clones;
    private static Simulation[] simulations;
    private static List<Simulation> sortedSimulations;
    public int desfaseIdMetrica = 0;
    public int idMetrica = 0;
    private int metricaEnCero;
    public LineController lc;

    public GraphRegresion graphRegresion;

    static Settings settings;

    private List<GameObject> porBorrar;
    void Awake() {
        labelTemplateX = transform.Find("LabelX").GetComponent<RectTransform>();
        labelTemplateY1 = transform.Find("LabelYLow").GetComponent<RectTransform>();
        labelTemplateY2 = transform.Find("LabelYMid").GetComponent<RectTransform>();
        labelTemplateY3 = transform.Find("LabelYHigh").GetComponent<RectTransform>();
        dashTemplateX = transform.Find("DashX").GetComponent<RectTransform>();
        dashTemplateY = transform.Find("DashY").GetComponent<RectTransform>();


        metricaEnCero = idMetrica;
        porBorrar = new List<GameObject>();
        currentProfile = StartScene.GetSelectedProfile();
        profile = SaveSystem.LoadProfile(currentProfile);
        profileText.SetText(profile.GetName());

        settings = SaveSystem.loadSettings();

        float[] data = getData();
        CreateGraphic(data);
    }

    void Start() {
    }

    void Update() {
        if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.WindowsEditor) {
            if (Input.GetKeyDown(KeyCode.Escape)) {
                SceneManager.LoadScene("ProfileScene");
            }
        }
    }

    private void CreateGraphic(float[] data) {
        clones = new Vector2[data.Length];
        RectTransform plotRT = (RectTransform) plotObjects.transform;
        labelTemplateY1.GetComponent<Text>().text = Mathf.RoundToInt(data.Min()).ToString();
        labelTemplateY2.GetComponent<Text>().text = Mathf.RoundToInt((data.Min()/2 + data.Max()/2)).ToString();
        labelTemplateY3.GetComponent<Text>().text = Mathf.RoundToInt(data.Max()).ToString();
        for (int i = 0; i < data.Length; i++) {
            GameObject clone = Instantiate(dot);
            porBorrar.Add(clone);
            clone.SetActive(true);
            clone.transform.SetParent(plotObjects.transform);
            clone.transform.localPosition = new Vector3((float) ((-0.5 + (double) i/(data.Length - 1))*plotRT.rect.width), ((float) -0.5 + (data[i] - data.Min())/(data.Max() - data.Min() + 0.001f))*plotRT.rect.height, 0);
            clones[i] = new Vector2((float) (-0.5 + (double) i/(data.Length - 1)), (float) -0.5 + (data[i] - data.Min())/(data.Max() - data.Min() + 0.001f));

            RectTransform rt = (RectTransform) transform;
            RectTransform labelX = Instantiate(labelTemplateX);
            porBorrar.Add(labelX.gameObject);
            labelX.SetParent(transform);
            labelX.gameObject.SetActive(true);
            labelX.localPosition = new Vector3((float) ((-0.5 + (double) i/(data.Length - 1))*plotRT.rect.width), -plotRT.rect.height/2 - (rt.rect.width/8 - plotRT.rect.width/8) , 0);
            labelX.GetComponent<Text>().text = (sortedSimulations[i].GetDate().Split(" ")[0].Split("/")[0] + "/" + sortedSimulations[i].GetDate().Split(" ")[0].Split("/")[1]).ToString();

            RectTransform dashX = Instantiate(dashTemplateX);
            porBorrar.Add(dashX.gameObject);
            dashX.SetParent(transform);
            dashX.gameObject.SetActive(true);
            dashX.localPosition = new Vector3(-plotRT.rect.width/2, (float) ( -0.5 + (double) i/(data.Length - 1))*plotRT.rect.height, 0);
            dashX.sizeDelta = new Vector2(plotRT.rect.width, dashX.rect.height);
            dashX.transform.localScale = new Vector3(1f, 1f, 1f);

            //RectTransform labelY = Instantiate(labelTemplateY);
            //porBorrar.Add(labelY.gameObject);
            //labelY.SetParent(transform);
            //labelY.gameObject.SetActive(true);
            //labelY.localPosition = new Vector3(-plotRT.rect.width/2 - (rt.rect.width/4 - plotRT.rect.width/4), ((float) -0.5 + (data[i] - data.Min())/(data.Max() - data.Min()))*plotRT.rect.height, 0);
            //labelY.GetComponent<Text>().text = (data[i]).ToString();

            RectTransform dashY = Instantiate(dashTemplateY);
            porBorrar.Add(dashY.gameObject);
            dashY.SetParent(transform);
            dashY.gameObject.SetActive(true);
            dashY.localPosition = new Vector3((float) ((-0.5 + (double) i/(data.Length - 1))*plotRT.rect.width), -plotRT.rect.height/2, 0);
            dashY.sizeDelta = new Vector2(plotRT.rect.height, dashX.rect.height);
            dashY.transform.localScale = new Vector3(1f, 1f, 1f);
        }
    }

    public Vector2[] getVectors() {
        return clones;
    }

    public float[] getData()
    {

        simulations = SaveSystem.LoadSimulations(currentProfile);
        sortedSimulations = simulations.OrderBy(o => o.GetDate()).ToList();
        float[] returnData = new float[sortedSimulations.Count];
        for (int i = 0; i < sortedSimulations.Count; i++)
        {
            if (idMetrica < 11)
            {
                returnData[i] = Ponderador.GetScoreForIndex(idMetrica, sortedSimulations[i].metricas, settings) * 100.0f;
            }
            else
            {
                switch (idMetrica)
                {
                    case 11:
                        returnData[i] = Ponderador.ComputeGeneralScore(sortedSimulations[i].metricas, settings);
                        break;
                    case 12:
                        returnData[i] = Ponderador.ComputeNavigationScore(sortedSimulations[i].metricas, settings);
                        break;
                    case 13:
                        returnData[i] = Ponderador.ComputeSafetyScore(sortedSimulations[i].metricas, settings);
                        break;
                    case 14:
                        returnData[i] = Ponderador.ComputeExecutionScore(sortedSimulations[i].metricas, settings);
                        break;
                }
            }
        }

        graphRegresion.SetGraphDescription(idMetrica);

        return returnData;
    }

    public static Vector2[] get2DData(int idMetrica)
    {
        if (simulations.Length > 0)
        {
            Vector2[] returnData = new Vector2[sortedSimulations.Count];

            // Define the reference date (01/01/2023)
            DateTime referenceDate = new DateTime(2023, 1, 1);
            for (int i = 0; i < sortedSimulations.Count; i++)
            {
                string inputDateString = sortedSimulations[i].GetDate();
                if (inputDateString.Split(" ")[1].Split(":").Length == 2) {
                    inputDateString += ":00";
                }
                if (inputDateString.Split(" ")[0].Split("-").Length == 0) {
                    inputDateString = inputDateString.Split(" ")[0].Split("-")[0] + "/" + inputDateString.Split(" ")[0].Split("-")[2] + "/" + 
                                      inputDateString.Split(" ")[0].Split("-")[2] + " " + inputDateString.Split(" ")[1];
                }
                DateTime inputDate = DateTime.ParseExact(inputDateString, "dd/MM/yyyy HH:mm:ss", null);;
                TimeSpan timeDifference = inputDate - referenceDate;
                float numberOfDays = (float)timeDifference.TotalDays;

                if (idMetrica < 11)
                {

                    float score = Ponderador.GetScoreForIndex(idMetrica, sortedSimulations[i].metricas, settings) * 100.0f;
                    returnData[i] = new Vector2(numberOfDays, score);
                }
                else
                {
                    float score = 0;
                    switch (idMetrica)
                    {
                        case 11:
                            score = Ponderador.ComputeGeneralScore(sortedSimulations[i].metricas, settings);
                            returnData[i] = new Vector2(numberOfDays, score);
                            break;
                        case 12:
                            score = Ponderador.ComputeNavigationScore(sortedSimulations[i].metricas, settings);
                            returnData[i] = new Vector2(numberOfDays, score);
                            break;
                        case 13:
                            score = Ponderador.ComputeSafetyScore(sortedSimulations[i].metricas, settings);
                            returnData[i] = new Vector2(numberOfDays, score);
                            break;
                        case 14:
                            score = Ponderador.ComputeExecutionScore(sortedSimulations[i].metricas, settings);
                            returnData[i] = new Vector2(numberOfDays, score);
                            break;
                    }
                }
            }

            return returnData;
        }
        else
        {
            Debug.LogError("get2DData no tiene las simulaciones");
            return new Vector2[1];
        }
    }

    public void changeData(int id){
        if(id == 0){
            idMetrica = metricaEnCero;
        }else{
            idMetrica = id + desfaseIdMetrica;
        }
        for(int i = 0; i < porBorrar.Count; i++){
            GameObject.Destroy(porBorrar[i]);
        }
        porBorrar.Clear();
        float[] data = getData();
        CreateGraphic(data);
        lc.SetVerticesDirty();
    }
}
