using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Transit : MonoBehaviour
{
    public bool isCrossRoad;
    public bool canTransit;
    public bool isStop;
    public List<Transform> points;
    public List<Transform> points2;
    public List<Transform> points3;
    public List<Transform> points4;
    public List<Transform> points5;
    public List<Transform> points6;
    public List<Transform> points7;
    public List<Transform> points8;
    // Start is called before the first frame update
    void Start()
    {
        canTransit = true;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
