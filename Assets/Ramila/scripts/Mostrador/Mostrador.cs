using UnityEngine;

public class Mostrador : MonoBehaviour
{
    public static Mostrador Instance;
    private void Awake()
    {
        Instance = this;
    }

    int[] precio = new int[9];
    public int precioReal = 0, precioRestante = 0;
    int pagaUsuario = 0;

    bool initFlag = false;


    bool isCurrentlySelected = false;
    QuickOutline outline;

    private void Start()
    {
        outline = GetComponent<QuickOutline>();
    }

    void Update()
    {

        if (isCurrentlySelected)
        {
            SwitchMaterialState(true);
        }
        else
        {
            SwitchMaterialState(false);
        }

        isCurrentlySelected = false;
    }

    private void OnCollisionEnter(Collision other) {
        if (other.gameObject.CompareTag("Player") && PlayerBasket.Instance.HasBasketFull()){
            if (!initFlag)
            {
                initFlag = true;
                OnMostradorPlayerActivation();
            }
        }
    }

    void OnMostradorPlayerActivation()
    {
        PlayerMovement.Instance.CollidedWithMostrador(MostradorMovements.Instance.targetPlayerTransform.position);
        MostradorMovements.Instance.Invoke("StartMovingBasketToMostrador", 1);
        MostradorMovements.Instance.Invoke("ActivateAllBilletes", 2);
    }


    public void ComputeTotalValue(int[] objetos)
    {
        for (int i = 0; i < 9; i++)
        {
            precio[i] = Random.Range(0, 4);
            precioReal += precio[i] * Billete.ObtenerValorDeBilllete(i);
        }

        //print("Precio a pagar " + precioReal);
    }

    public void ActualizarPaga(int valor)
    {
        pagaUsuario += valor;

        if (pagaUsuario < 0)
        {
            Debug.LogError("Que wea, estan lavando dinero");
        }

        if (pagaUsuario == precioReal)
        {
            ExitoDeCompra();
        }

        precioRestante = precioReal - pagaUsuario;
    }

    void ExitoDeCompra()
    {
        MostradorMovements.Instance.SetStateText(false);
        Billete.isLocked = true;

        MostradorMovements.Instance.Invoke("StartMovingBasketToMostradorEnd", 1);
        MostradorMovements.Instance.Invoke("StartMovingBasketToPlayer", 2);
    }

    public void CurrentlySelected()
    {
        if (!initFlag && PlayerBasket.Instance.currentIdx > 5)
        {
            isCurrentlySelected = true;
        }
    }

    void SwitchMaterialState(bool state)
    {

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
}
