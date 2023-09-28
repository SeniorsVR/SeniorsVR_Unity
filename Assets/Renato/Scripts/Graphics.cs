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
    private RectTransform labelTemplateX, labelTemplateY;
    private RectTransform dashTemplateX, dashTemplateY;
    private new string currentProfile;
    private Profile profile;
    private Vector2[] clones;
    private Simulation[] simulations;
    public int desfaseIdMetrica = 0;
    public int idMetrica = 0;
    public LineController lc;

    private List<GameObject> porBorrar;
    void Awake() {
        labelTemplateX = transform.Find("LabelX").GetComponent<RectTransform>();
        labelTemplateY = transform.Find("LabelY").GetComponent<RectTransform>();
        dashTemplateX = transform.Find("DashX").GetComponent<RectTransform>();
        dashTemplateY = transform.Find("DashY").GetComponent<RectTransform>();
    }

    void Start() {
        porBorrar = new List<GameObject>();
        currentProfile = StartScene.GetSelectedProfile();
        profile = SaveSystem.LoadProfile(currentProfile);
        profileText.SetText(profile.GetName());
        
        float[] data = getData();
        CreateGraphic(data);
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
        for (int i = 0; i < data.Length; i++) {
            GameObject clone = Instantiate(dot);
            porBorrar.Add(clone);
            clone.SetActive(true);
            clone.transform.SetParent(plotObjects.transform);
            clone.transform.localPosition = new Vector3((float) ((-0.5 + (double) i/(data.Length - 1))*plotRT.rect.width), ((float) -0.5 + (data[i] - data.Min())/(data.Max() - data.Min()))*plotRT.rect.height, 0);
            clones[i] = new Vector2((float) (-0.5 + (double) i/(data.Length - 1)), (float) -0.5 + (data[i] - data.Min())/(data.Max() - data.Min()));

            RectTransform rt = (RectTransform) transform;
            RectTransform labelX = Instantiate(labelTemplateX);
            porBorrar.Add(labelX.gameObject);
            labelX.SetParent(transform);
            labelX.gameObject.SetActive(true);
            labelX.localPosition = new Vector3((float) ((-0.5 + (double) i/(data.Length - 1))*plotRT.rect.width), -plotRT.rect.height/2 - (rt.rect.width/8 - plotRT.rect.width/8) , 0);
            labelX.GetComponent<Text>().text = (i + 1).ToString();

            RectTransform dashX = Instantiate(dashTemplateX);
            porBorrar.Add(dashX.gameObject);
            dashX.SetParent(transform);
            dashX.gameObject.SetActive(true);
            dashX.localPosition = new Vector3(-plotRT.rect.width/2, (float) ( -0.5 + (double) i/(data.Length - 1))*plotRT.rect.height, 0);
            dashX.sizeDelta = new Vector2(plotRT.rect.width, dashX.rect.height);
            dashX.transform.localScale = new Vector3(1f, 1f, 1f);

            RectTransform labelY = Instantiate(labelTemplateY);
            porBorrar.Add(labelY.gameObject);
            labelY.SetParent(transform);
            labelY.gameObject.SetActive(true);
            labelY.localPosition = new Vector3(-plotRT.rect.width/2 - (rt.rect.width/4 - plotRT.rect.width/4), ((float) -0.5 + (data[i] - data.Min())/(data.Max() - data.Min()))*plotRT.rect.height, 0);
            labelY.GetComponent<Text>().text = (data[i]).ToString();

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

    public float[] getData(){
        simulations = SaveSystem.LoadSimulations(currentProfile);
        List<Simulation> sortedSimulations = simulations.OrderBy(o=>o.GetDate()).ToList();
        float[] returnData = new float[sortedSimulations.Count];
        for(int i = 0; i<sortedSimulations.Count;i++){
            switch(idMetrica){
                case 0:
                    returnData[i]=sortedSimulations[i].metricas.tiempo_total; //GLOBAL
                    break;
                case 1:
                    returnData[i]=sortedSimulations[i].metricas.tiempo_total;
                    break;
                case 2:
                    returnData[i]=sortedSimulations[i].metricas.tiempo_total_ida;
                    break;
                case 3:
                    returnData[i]=sortedSimulations[i].metricas.tiempo_total_vuelta;
                    break;
                case 4:
                    returnData[i]=sortedSimulations[i].metricas.tiempo_total;
                    break;
                case 5:
                    returnData[i]=sortedSimulations[i].metricas.tiempo_total;
                    break;
                case 6:
                    returnData[i]=sortedSimulations[i].metricas.tiempo_total;
                    break;
                case 7:
                    returnData[i]=sortedSimulations[i].metricas.tiempo_total;
                    break;
                case 8:
                    returnData[i]=sortedSimulations[i].metricas.tiempo_total;
                    break;
                case 9:
                    returnData[i]=sortedSimulations[i].metricas.tiempo_total;
                    break;
                case 10:
                    returnData[i]=sortedSimulations[i].metricas.tiempo_total;
                    break;
                case 11:
                    returnData[i]=sortedSimulations[i].metricas.tiempo_total;
                    break;
                case 12:
                    returnData[i]=sortedSimulations[i].metricas.tiempo_total;
                    break;
                case 13:
                    returnData[i]=sortedSimulations[i].metricas.tiempo_total;
                    break;
                case 14:
                    returnData[i]=sortedSimulations[i].metricas.tiempo_total;
                    break;
                case 15:
                    returnData[i]=sortedSimulations[i].metricas.tiempo_total;
                    break;
            }
            
        }
        return returnData;
    }

    public void changeData(int id){
        idMetrica = id + desfaseIdMetrica;
        for(int i = 0; i < porBorrar.Count; i++){
            GameObject.Destroy(porBorrar[i]);
        }
        porBorrar.Clear();
        float[] data = getData();
        CreateGraphic(data);
        lc.SetVerticesDirty();
    }
}
