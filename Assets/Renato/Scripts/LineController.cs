using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.UI;

public class LineController : Graphic {
    // private LineRenderer lineRenderer;
    //private Transform[] points;
    
    /*private void Awake() {
        lineRenderer = GetComponent<LineRenderer>();
    }

    void Update() { // change Update function because it happens once
        for (int i = 0; i < points.Length; i++) {
            lineRenderer.SetPosition(i, points[i].position);
        }
    } */
    public Vector2Int gridSize;
    private Vector2[] points;
    private float thickness = 0.1f;

    private float width, height, unitWidth, unitHeight;

    /*public void SetUpLine(Vector2[] points) {
        this.points = points;
    }*/

    protected override void OnPopulateMesh(VertexHelper vh) {
        points = Graphics.getVectors();
        vh.Clear();

        width = rectTransform.rect.width;
        height = rectTransform.rect.height;

        unitWidth = width/(float)gridSize.x;
        unitHeight = height/(float)gridSize.y;

        if (points.Length < 2) {
            return;
        }

        for (int i = 0; i < points.Length; i++) {
            Vector2 point = points[i];
            DrawVertices(point, vh);
        }

        for (int i = 0; i < points.Length - 1; i++) {
            int index = i*2;
            vh.AddTriangle(index, index + 1, index + 3);
            vh.AddTriangle(index + 3, index + 2, index);
        }
    }

    void DrawVertices(Vector2 point, VertexHelper vh) {
        UIVertex vertex = UIVertex.simpleVert;
        vertex.color = color;

        vertex.position = new Vector3(-thickness/2, 0);
        vertex.position += new Vector3(unitWidth*point.x, unitHeight * point.y);
        vh.AddVert(vertex);

        vertex.position = new Vector3(thickness/2, 0);
        vertex.position += new Vector3(unitWidth*point.x, unitHeight*point.y);
        vh.AddVert(vertex);
    }
}
