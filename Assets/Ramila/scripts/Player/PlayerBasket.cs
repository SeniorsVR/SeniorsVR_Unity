using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerBasket : MonoBehaviour
{
    public static PlayerBasket Instance;
    private void Awake() {
        Instance = this;
    }

    public Transform objectsTransformsParent;
    Transform[] objectsTransforms = new Transform[6];

    int[] objetos = new int[6];

    public int currentIdx = 0;
    
    private void Start() {
        for (int i=0; i<6; i++){
            objectsTransforms[i] = objectsTransformsParent.GetChild(i);
        }    
    }

    public int AddObject(int tipo){
        if (currentIdx < 6){

            MeshRenderer meshRenderer = objectsTransforms[currentIdx].GetChild(tipo).GetComponent<MeshRenderer>();
            meshRenderer.enabled = true;

            objetos[currentIdx] = tipo;

            currentIdx++;
        }

        if (HasBasketFull())
        {
            Mostrador.Instance.ComputeTotalValue(objetos);
        }

        return 6-currentIdx;
    }

    public bool HasBasketFull()
    {
        return currentIdx >= 6;
    }
}
