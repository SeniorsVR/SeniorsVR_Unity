using nico;
using UnityEngine;

public class Segmento : MonoBehaviour
{
    public bool enRuta;
    private bool transitado;

    // Start is called before the first frame update
    void Start()
    {
        transitado = false;
        if(enRuta){
            TestManager.AddSegmentosRuta();
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if(!transitado){
            if (other.CompareTag("Player"))
            {
                if(enRuta){
                    TestManager.AddSegmentosRutaTransitados();
                }else{
                    TestManager.AddSegmentosNoRutaTransitados();
                }
            }
        }
        transitado = true;
    }
}
