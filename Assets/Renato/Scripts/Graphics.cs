using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Graphics : MonoBehaviour {
    public GameObject dot;
    private int[] data;
    static private Vector2[] clones;
    void Start() {
        int[] data = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        CreateGraphic(data);
    }

    private void CreateGraphic(int[] data) {
        clones = new Vector2[data.Length];
        for (int i = 0; i < data.Length; i++) {
            GameObject clone = Instantiate(dot, new Vector3(100 + 50*i, 100 + data[i]*10, 0), Quaternion.identity, GameObject.FindGameObjectWithTag("Canvas").transform);
            clones[i] = new Vector2((clone.transform.position.x - 100)/50, (clone.transform.position.y - 100)/10);
        }
    }

    static public Vector2[] getVectors() {
        return clones;
    }
}
