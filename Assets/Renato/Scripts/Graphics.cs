using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Linq;
using UnityEngine.SceneManagement;

public class Graphics : MonoBehaviour {
    public GameObject dot, plotObjects;
    private RectTransform labelTemplateX, labelTemplateY;
    private RectTransform dashTemplateX, dashTemplateY;
    static private Vector2[] clones;
    void Awake() {
        labelTemplateX = transform.Find("LabelX").GetComponent<RectTransform>();
        labelTemplateY = transform.Find("LabelY").GetComponent<RectTransform>();
        dashTemplateX = transform.Find("LinesObject/DashX").GetComponent<RectTransform>();
        dashTemplateY = transform.Find("LinesObject/DashY").GetComponent<RectTransform>();
    }

    void Start() {
        float[] data = {1, 5, 3, 4, 5, 7, 8, 8, 3, 10};
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
            clone.SetActive(true);
            clone.transform.SetParent(plotObjects.transform);
            clone.transform.localPosition = new Vector3((float) ((-0.5 + (double) i/(data.Length - 1))*plotRT.rect.width), ((float) -0.5 + (data[i] - data.Min())/(data.Max() - data.Min()))*plotRT.rect.height, 0);
            clones[i] = new Vector2((float) (-0.5 + (double) i/(data.Length - 1)), (float) -0.5 + (data[i] - data.Min())/(data.Max() - data.Min()));

            RectTransform rt = (RectTransform) transform;
            RectTransform labelX = Instantiate(labelTemplateX);
            labelX.SetParent(transform);
            labelX.gameObject.SetActive(true);
            labelX.localPosition = new Vector3((float) ((-0.5 + (double) i/(data.Length - 1))*plotRT.rect.width), -plotRT.rect.height/2 - (rt.rect.width/8 - plotRT.rect.width/8) , 0);
            labelX.GetComponent<Text>().text = (i + 1).ToString();

            RectTransform dashX = Instantiate(dashTemplateX);
            dashX.SetParent(plotObjects.transform);
            dashX.gameObject.SetActive(true);
            dashX.localPosition = new Vector3(-plotRT.rect.width/2, (float) ( -0.5 + (double) i/(data.Length - 1))*plotRT.rect.height, 0);

            RectTransform labelY = Instantiate(labelTemplateY);
            labelY.SetParent(transform);
            labelY.gameObject.SetActive(true);
            labelY.localPosition = new Vector3(-plotRT.rect.width/2 - (rt.rect.width/4 - plotRT.rect.width/4), ((float) -0.5 + (data[i] - data.Min())/(data.Max() - data.Min()))*plotRT.rect.height, 0);
            labelY.GetComponent<Text>().text = (data[i]).ToString();

            RectTransform dashY = Instantiate(dashTemplateY);
            dashY.SetParent(plotObjects.transform);
            dashY.gameObject.SetActive(true);
            dashY.localPosition = new Vector3((float) ((-0.5 + (double) i/(data.Length - 1))*plotRT.rect.width), -plotRT.rect.height/2, 0);

        }
    }

    static public Vector2[] getVectors() {
        return clones;
    }
}
