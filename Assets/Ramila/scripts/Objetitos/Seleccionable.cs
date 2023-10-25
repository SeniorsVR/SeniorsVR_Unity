using UnityEngine;

public class Seleccionable : MonoBehaviour
{

    public int tipo = -1;

    [HideInInspector]
    public bool isCurrentlySelected = false;
    QuickOutline outline;

    MeshRenderer meshRenderer;

    static bool isBasketFull = false;


    // Start is called before the first frame update
    void Start()
    {
        meshRenderer = GetComponent<MeshRenderer>();
        outline = GetComponent<QuickOutline>();

    }

    // Update is called once per frame
    void Update()
    {

        if (isCurrentlySelected){
            SwitchMaterialState(true);
        }
        else{
            SwitchMaterialState(false);
        }

        isCurrentlySelected = false;
    }

    public void CurrentlySelected(){
        if (!isBasketFull){
            isCurrentlySelected = true;
        }
    }

    void SwitchMaterialState(bool state){

        if (state)
        {
            //con outline
            outline.enabled = true;
        }
        else
        {
            //sin outline
            outline.enabled = false;
        }
    }

    public void Recoger(){

        int remaning = PlayerBasket.Instance.AddObject(tipo);
        if (remaning <= 0){
            isBasketFull = true;
        }

        Destroy(gameObject);
    }
}
