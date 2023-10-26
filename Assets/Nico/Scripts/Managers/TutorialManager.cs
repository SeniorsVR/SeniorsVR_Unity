using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

namespace nico
{
    public enum TutorialState
    {
        MoverCamara1,
        MoverCamara2,
        MoverCamara3,
        MantenerCamara1,
        MantenerCamara2,
        MantenerCamara3,
        Moverse,
        IrLista,
        LeerLista,
        MoverseCruze,
        LeyesTransito,
        Semaforos,
        CaminoKiosko,
        RecojerCanasta,
        RecojerObjetos,
        DevolerObjetos,
        LlenarObjetos,
        IrCaja,
        CajaAnimacion1,
        Pagar1,
        Pagar2,
        Pagar3,
        CajaAnimacion2,
        Recoger,
        Irse,

        EMPTY,
    }

    public class TutorialManager : MonoBehaviour
    {
        public static TutorialManager Instance;
        private void Awake()
        {
            Instance = this;
        }

        public static bool lastTestWasTutorial = false;

        public GameObject letrero, cruce, cruce2, semaforo_go, flecha, canastos, caja, bolsa;
        public GameObject[] circulos;

        public TextMeshProUGUI staticText;

        public TutorialState tutorialState = TutorialState.MoverCamara1;

        float counter = 0;

        Semaforo semaforo;


        // Start is called before the first frame update
        void Start()
        {
            semaforo = semaforo_go.GetComponent<Semaforo>();
            ChangeTutorialState(TutorialState.MoverCamara1);
        }

        // Update is called once per frame
        void Update()
        {
            switch (tutorialState)
            {

                case TutorialState.Moverse:
                    if (PlayerMovement.isMoving)
                    {
                        counter += Time.deltaTime;
                    }
                    if (counter > 0.5f)
                    {
                        counter = 0;
                        ChangeTutorialState(TutorialState.IrLista);
                    }
                    break;

                case TutorialState.IrLista:
                    float distance = Vector3.Distance(PlayerMovement.Instance.transform.position, letrero.transform.position);
                    if (distance < 5)
                    {
                        ChangeTutorialState(TutorialState.LeerLista);
                    }
                    else if (distance > 25)
                    {
                        ChangeTutorialState(TutorialState.LeerLista);
                    }
                    break;

                case TutorialState.LeerLista:
                    counter += Time.deltaTime;
                    if (counter > 4f)
                    {
                        counter = 0;
                        ChangeTutorialState(TutorialState.MoverseCruze);
                    }
                    break;

                case TutorialState.MoverseCruze:
                    if (Vector3.Distance(PlayerMovement.Instance.transform.position, cruce.transform.position) < 4)
                    {
                        ChangeTutorialState(TutorialState.LeyesTransito);
                    }
                    break;

                case TutorialState.LeyesTransito:
                    counter += Time.deltaTime;
                    if (counter > 6f)
                    {
                        counter = 0;
                        ChangeTutorialState(TutorialState.Semaforos);
                    }
                    break;

                case TutorialState.Semaforos:
                    if (!semaforo.state)
                    {
                        staticText.text = "Cruza la calle mientras el semáforo esté en verde.";
                        TutorialArrow.Instance.SetTarget(cruce2.transform.position + Vector3.up * 3, cruce2.transform.position);
                    }
                    else
                    {
                        staticText.text = "Detente y espera a que el semáforo muestra luz verde para cruzar.";
                        TutorialArrow.Instance.gameObject.SetActive(false);
                    }

                    if (Vector3.Distance(PlayerMovement.Instance.transform.position, cruce2.transform.position) < 4)
                    {
                        ChangeTutorialState(TutorialState.CaminoKiosko);
                    }
                    break;

                case TutorialState.LlenarObjetos:
                    staticText.text = "Te faltan " + (6-PlayerBasket.Instance.GetNumArticulos()) + " articulos.";
                    break;

                case TutorialState.Pagar2:
                    counter += Time.deltaTime;
                    if (counter > 5f)
                    {
                        counter = 0;
                        ChangeTutorialState(TutorialState.Pagar3);
                    }
                    break;
            }
        }

        public void ChangeTutorialState(TutorialState state)
        {
            tutorialState = state;

            switch (state)
            {
                case TutorialState.MoverCamara1:
                    staticText.text = "Mira hacia el círculo azul.";
                    TutorialArrow.Instance.SetTarget(circulos[0].transform.position + Vector3.up * 3, circulos[0].transform.position);
                    PlayerActions.Instance.grabRange = 100;
                    circulos[0].gameObject.SetActive(true);
                    circulos[1].gameObject.SetActive(false);
                    circulos[2].gameObject.SetActive(false);
                    TutorialVoice.Instance.PlayAudio(AudiosTutorial.Introduccion);
                    break;
                case TutorialState.MoverCamara2:
                    staticText.text = "Mira hacia el círculo rojo arriba de usted.";
                    TutorialArrow.Instance.SetTarget(circulos[1].transform.position + Vector3.up * 3, circulos[1].transform.position);
                    PlayerActions.Instance.grabRange = 100;
                    circulos[0].gameObject.SetActive(false);
                    circulos[1].gameObject.SetActive(true);
                    circulos[2].gameObject.SetActive(false);
                    TutorialVoice.Instance.PlayAudio(AudiosTutorial.CirculoRojo);
                    break;
                case TutorialState.MoverCamara3:
                    staticText.text = "Mira hacia el círculo amarillo detras de usted.";
                    TutorialArrow.Instance.SetTarget(circulos[2].transform.position + Vector3.up * 3, circulos[2].transform.position);
                    PlayerActions.Instance.grabRange = 100;
                    circulos[0].gameObject.SetActive(false);
                    circulos[1].gameObject.SetActive(false);
                    circulos[2].gameObject.SetActive(true);
                    TutorialVoice.Instance.PlayAudio(AudiosTutorial.CirculoAmarillo);
                    break;

                case TutorialState.MantenerCamara1:
                    staticText.text = "Mantente mirando el círculo azul.";
                    TutorialArrow.Instance.SetTarget(circulos[0].transform.position + Vector3.up * 3, circulos[0].transform.position);
                    circulos[0].gameObject.SetActive(true);
                    circulos[1].gameObject.SetActive(false);
                    circulos[2].gameObject.SetActive(false);
                    break;
                case TutorialState.MantenerCamara2:
                    staticText.text = "Mantente mirando el círculo rojo.";
                    TutorialArrow.Instance.SetTarget(circulos[0].transform.position + Vector3.up * 3, circulos[0].transform.position);
                    circulos[0].gameObject.SetActive(false);
                    circulos[1].gameObject.SetActive(true);
                    circulos[2].gameObject.SetActive(false);
                    break;
                case TutorialState.MantenerCamara3:
                    staticText.text = "Mantente mirando el círculo amarillo.";
                    TutorialArrow.Instance.SetTarget(circulos[0].transform.position + Vector3.up * 3, circulos[0].transform.position);
                    circulos[0].gameObject.SetActive(false);
                    circulos[1].gameObject.SetActive(false);
                    circulos[2].gameObject.SetActive(true);
                    break;

                case TutorialState.Moverse:
                    staticText.text = "Pulsa cualquier botón del control para moverte.";
                    TutorialArrow.Instance.gameObject.SetActive(false);
                    PlayerActions.Instance.grabRange = 3;
                    TutorialVoice.Instance.PlayAudio(AudiosTutorial.Moverse);
                    break;

                case TutorialState.IrLista:
                    staticText.text = "Dirígete hacia el letrero con la lista.";
                    TutorialArrow.Instance.SetTarget(letrero.transform.position + Vector3.up * 2, letrero.transform.position);
                    break;

                case TutorialState.LeerLista:
                    staticText.text = "Esta es la lista de los artículos que deberás comprar.";
                    TutorialArrow.Instance.SetTarget(letrero.transform.position + Vector3.up * 2, letrero.transform.position);
                    TutorialVoice.Instance.PlayAudio(AudiosTutorial.Letrero);
                    break;

                case TutorialState.MoverseCruze:
                    staticText.text = "Dirígete hacia el cruce peatonal.";
                    TutorialArrow.Instance.SetTarget(cruce.transform.position + Vector3.up * 3, cruce.transform.position);
                    TutorialVoice.Instance.PlayAudio(AudiosTutorial.IrCruce);
                    break;

                case TutorialState.LeyesTransito:
                    staticText.text = "Para desplazarte por esta ciudad deberás respetar las leyes de tránsito, camina solo por las veredas y atraviesa las calles por los cruces peatonales.";
                    TutorialArrow.Instance.gameObject.SetActive(false);
                    TutorialVoice.Instance.PlayAudio(AudiosTutorial.Semaforo);
                    break;

                case TutorialState.Semaforos:
                    staticText.text = "";
                    TutorialArrow.Instance.gameObject.SetActive(false);
                    break;

                case TutorialState.CaminoKiosko:
                    staticText.text = "Dirígete hacia a donde apunta la flecha superior para llegar al kiosko.";
                    flecha.SetActive(true);
                    TutorialArrow.Instance.gameObject.SetActive(false);
                    TutorialVoice.Instance.PlayAudio(AudiosTutorial.Flecha);
                    break;

                case TutorialState.RecojerCanasta:
                    staticText.text = "Mira un canasto y pulsa un botón del controlador para recogerlo.";
                    TutorialArrow.Instance.SetTarget(canastos.transform.position + Vector3.up * 2, canastos.transform.position);
                    TutorialVoice.Instance.PlayAudio(AudiosTutorial.Canasta);
                    break;

                case TutorialState.RecojerObjetos:
                    staticText.text = "Ahora de la misma forma recoge los artículos que se pedían en la lista, o al menos los que recuerdes.";
                    TutorialArrow.Instance.gameObject.SetActive(false);
                    TutorialVoice.Instance.PlayAudio(AudiosTutorial.Articulos);
                    break;

                case TutorialState.DevolerObjetos:
                    staticText.text = "Mira hacia tu canasta e interactúa con un artículo en ella para devolverlo.";
                    TutorialArrow.Instance.gameObject.SetActive(false);
                    TutorialVoice.Instance.PlayAudio(AudiosTutorial.DevolerArticulo);
                    break;

                case TutorialState.LlenarObjetos:
                    staticText.text = "Te faltan " + PlayerBasket.Instance.GetNumArticulos() + " articulos.";
                    TutorialArrow.Instance.gameObject.SetActive(false);
                    TutorialVoice.Instance.PlayAudio(AudiosTutorial.LlenarCanasto);
                    break;

                case TutorialState.IrCaja:
                    staticText.text = "Dirígete hacia la caja e interactúa con ella de la misma forma para pagar tus artículos.";
                    TutorialArrow.Instance.SetTarget(caja.transform.position + Vector3.up * 1.5f, caja.transform.position);
                    TutorialVoice.Instance.PlayAudio(AudiosTutorial.Caja);
                    break;

                case TutorialState.Pagar1:
                    staticText.text = "De la misma manera en la que tomaste los artículos, selecciona las monedas y billetes con los que pagarás el total.";
                    TutorialArrow.Instance.gameObject.SetActive(false);
                    TutorialVoice.Instance.PlayAudio(AudiosTutorial.Billetes);
                    break;

                case TutorialState.Pagar2:
                    staticText.text = "Si te equivocas al elegir una moneda o billete, solo seleccionalo otras vez para devolverlo.";
                    TutorialArrow.Instance.gameObject.SetActive(false);
                    TutorialVoice.Instance.PlayAudio(AudiosTutorial.DevolverBillete);
                    break;

                case TutorialState.Pagar3:
                    staticText.text = "Cuando estés listo, habla con el cajero de la misma forma en la que has interactuado con los objetos para terminar el pago.";
                    TutorialArrow.Instance.gameObject.SetActive(false);
                    TutorialVoice.Instance.PlayAudio(AudiosTutorial.Cajero);
                    break;

                case TutorialState.Recoger:
                    staticText.text = "Recoge la bolsa con los artículos que compraste.";
                    TutorialArrow.Instance.SetTarget(bolsa.transform.position + Vector3.up * 1, bolsa.transform.position);
                    TutorialVoice.Instance.PlayAudio(AudiosTutorial.Bolsa);
                    break;

                case TutorialState.Irse:
                    staticText.text = "Sal del kiosko y vuelve a donde empezaste al principio del test, sigue las leyes del tránsito.";
                    TutorialArrow.Instance.gameObject.SetActive(false);
                    TutorialVoice.Instance.PlayAudio(AudiosTutorial.Irse);
                    break;

                case TutorialState.CajaAnimacion1:
                    staticText.text = "";
                    TutorialArrow.Instance.gameObject.SetActive(false);
                    break;
                case TutorialState.CajaAnimacion2:
                    staticText.text = "";
                    TutorialArrow.Instance.gameObject.SetActive(false);
                    break;

                case TutorialState.EMPTY:
                    staticText.text = "";
                    TutorialArrow.Instance.gameObject.SetActive(false);
                    break;

                default:
                    TutorialArrow.Instance.gameObject.SetActive(false);
                    staticText.text = "ERROR, estado indefinido.";
                    break;
            }
        }
    }
}