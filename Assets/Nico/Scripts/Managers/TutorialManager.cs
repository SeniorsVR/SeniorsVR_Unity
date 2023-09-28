using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

namespace nico
{
    public enum TutorialState
    {
        MoverCamara,
        MantenerCamara,
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
            lastTestWasTutorial = true;
        }

        public static bool lastTestWasTutorial = false;

        public GameObject circulo, letrero, cruce, cruce2, semaforo_go, flecha, canastos, caja, bolsa;

        public TextMeshProUGUI staticText;

        public TutorialState tutorialState = TutorialState.MoverCamara;

        float counter = 0;

        Semaforo semaforo;


        // Start is called before the first frame update
        void Start()
        {
            semaforo = semaforo_go.GetComponent<Semaforo>();
            ChangeTutorialState(TutorialState.MoverCamara);
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
                    print(distance);
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
                        staticText.text = "Cruza la calle mientras el semáforo está en verde.";
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
                case TutorialState.MoverCamara:
                    staticText.text = "Mira hacia el círculo azul.";
                    TutorialArrow.Instance.SetTarget(circulo.transform.position + Vector3.up * 3, circulo.transform.position);
                    PlayerActions.Instance.grabRange = 100;
                    break;

                case TutorialState.MantenerCamara:
                    staticText.text = "Mantente mirando el círculo azul.";
                    TutorialArrow.Instance.SetTarget(circulo.transform.position + Vector3.up * 3, circulo.transform.position);
                    break;
                case TutorialState.Moverse:
                    staticText.text = "Pulsa cualquier botón del control para moverte.";
                    TutorialArrow.Instance.gameObject.SetActive(false);
                    PlayerActions.Instance.grabRange = 3;
                    break;

                case TutorialState.IrLista:
                    staticText.text = "Dirígete hacia el letrero con la lista.";
                    TutorialArrow.Instance.SetTarget(letrero.transform.position + Vector3.up * 2, letrero.transform.position);
                    break;

                case TutorialState.LeerLista:
                    staticText.text = "Esta es la lista de los artículos que deberás comprar.";
                    TutorialArrow.Instance.SetTarget(letrero.transform.position + Vector3.up * 2, letrero.transform.position);
                    break;

                case TutorialState.MoverseCruze:
                    staticText.text = "Dirígete hacia el cruce peatonal.";
                    TutorialArrow.Instance.SetTarget(cruce.transform.position + Vector3.up * 3, cruce.transform.position);
                    break;

                case TutorialState.LeyesTransito:
                    staticText.text = "Para desplazarte por esta ciudad deberás respetar las leyes de tránsito, camina solo por las veredas y atraviesa las calles por los cruces peatonales.";
                    TutorialArrow.Instance.gameObject.SetActive(false);
                    break;

                case TutorialState.Semaforos:
                    staticText.text = "";
                    TutorialArrow.Instance.gameObject.SetActive(false);
                    break;

                case TutorialState.CaminoKiosko:
                    staticText.text = "Dirígete hacia a donde apunta la flecha superior para llegar al kiosko.";
                    flecha.SetActive(true);
                    TutorialArrow.Instance.gameObject.SetActive(false);
                    break;

                case TutorialState.RecojerCanasta:
                    staticText.text = "Mira un canasto y pulsa un botón del controlador para recogerlo.";
                    TutorialArrow.Instance.SetTarget(canastos.transform.position + Vector3.up * 2, canastos.transform.position);
                    break;

                case TutorialState.RecojerObjetos:
                    staticText.text = "Ahora de la misma forma recoge los artículos que se pedían en la lista, o al menos los que recuerdes.";
                    TutorialArrow.Instance.gameObject.SetActive(false);
                    break;

                case TutorialState.DevolerObjetos:
                    staticText.text = "Mira hacia tu canasta e interactúa con un artículo en ella para devolverlo.";
                    TutorialArrow.Instance.gameObject.SetActive(false);
                    break;

                case TutorialState.LlenarObjetos:
                    staticText.text = "Te faltan " + PlayerBasket.Instance.GetNumArticulos() + " articulos.";
                    TutorialArrow.Instance.gameObject.SetActive(false);
                    break;

                case TutorialState.IrCaja:
                    staticText.text = "Dirígete hacia la caja e interactúa con ella de la misma forma para pagar tus artículos.";
                    TutorialArrow.Instance.SetTarget(caja.transform.position + Vector3.up * 1.5f, caja.transform.position);
                    break;

                case TutorialState.Pagar1:
                    staticText.text = "De la misma manera en la que tomaste los artículos, selecciona las monedas y billetes con los que pagarás el total.";
                    TutorialArrow.Instance.gameObject.SetActive(false);
                    break;

                case TutorialState.Pagar2:
                    staticText.text = "Si te equivocas al elegir una moneda o billete, solo seleccionalo otras vez para devolverlo.";
                    TutorialArrow.Instance.gameObject.SetActive(false);
                    break;

                case TutorialState.Pagar3:
                    staticText.text = "Cuando estés listo, habla con la cajera de la misma forma en la que has interactuado con los objetos para terminar el pago.";
                    TutorialArrow.Instance.gameObject.SetActive(false);
                    break;

                case TutorialState.Recoger:
                    staticText.text = "Recoge la bolsa con los artículos que compraste.";
                    TutorialArrow.Instance.SetTarget(bolsa.transform.position + Vector3.up * 1, bolsa.transform.position);
                    break;

                case TutorialState.Irse:
                    staticText.text = "Sal del kiosko y vuelve a donde empezaste al principio del test, sigue las leyes del tránsito.";
                    TutorialArrow.Instance.gameObject.SetActive(false);
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