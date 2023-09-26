using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum TutorialState
{
    MoverCamara,
    Moverse,
    IrLista,
    LeerLista,
    LeyesTransito,
    MoverseCruze,
    Semaforos,
    CaminoKiosko,
    RecojerCanasta,
    RecojerObjetos,
    IrCaja,
    Pagar,
    Recoger,
    Irse,
}

public class TutorialManager : MonoBehaviour
{

    TutorialState tutorialState = TutorialState.MoverCamara;

    float totalDeltaCamera = 0;
    Quaternion lastAngleCamera;


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
