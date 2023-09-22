using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.UI;

public class LineController : Graphic {
    public Vector2Int gridSize;
    private Vector2[] points;
    private float thickness = 10f;

    private float width, height, unitWidth, unitHeight;


    protected override void OnPopulateMesh(VertexHelper vh) {
        points = Graphics.getVectors();
        vh.Clear();

        width = rectTransform.rect.width;
        height = rectTransform.rect.height;

        unitWidth = width/(float)gridSize.x;
        unitHeight = height/(float)gridSize.y;

        if (points == null || points.Length < 2) {
            return;
        }

        float angle = 0;
        for (int i = 0; i < points.Length - 1; i++) {
            Vector2 point = points[i];
            Vector2 point2 = points[i + 1];
            if (i < points.Length - 1) {
                angle = GetAngle(points[i], points[i + 1]) + 90f;
            }
            DrawVerticesForPoint(point, point2, angle, vh);
        }

        for (int i = 0; i < points.Length - 1; i++) {
            int index = i*4;
            vh.AddTriangle(index + 0, index + 1, index + 2);
            vh.AddTriangle(index + 1, index + 2, index + 3);
        }
        transform.SetAsLastSibling();
    }

    public float GetAngle(Vector2 me, Vector2 target) {
        return (float) (Mathf.Atan2(9f*(target.y - me.y), 16f*(target.x - me.x)) * (180/Mathf.PI));
    }

    void DrawVerticesForPoint(Vector2 point, Vector2 point2, float angle, VertexHelper vh) {
        UIVertex vertex = UIVertex.simpleVert;
        vertex.color = color;

        vertex.position = Quaternion.Euler(0, 0, angle) * new Vector3(-thickness/2, 0);
        vertex.position += new Vector3(unitWidth * point.x, unitHeight * point.y);
        vh.AddVert(vertex);

        vertex.position = Quaternion.Euler(0, 0, angle) * new Vector3(thickness/2, 0);
        vertex.position += new Vector3(unitWidth * point.x, unitHeight*point.y);
        vh.AddVert(vertex);

        vertex.position = Quaternion.Euler(0, 0, angle) * new Vector3(-thickness/2, 0);
        vertex.position += new Vector3(unitWidth * point2.x, unitHeight * point2.y);
        vh.AddVert(vertex);

        vertex.position = Quaternion.Euler(0, 0, angle) * new Vector3(thickness/2, 0);
        vertex.position += new Vector3(unitWidth * point2.x, unitHeight*point2.y);
        vh.AddVert(vertex);
    }
}
