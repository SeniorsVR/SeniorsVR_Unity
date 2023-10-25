using TMPro;
using UnityEngine;

public class MostradorMovements : MonoBehaviour
{
    public static MostradorMovements Instance;
    private void Awake()
    {
        Instance = this;
    }

    public Transform basketTransform, targetBasketTransform, targetPlayerTransform, billetesTransform;
    public TextMeshProUGUI text;

    bool basketToMostradorFlag = false;
    bool basketToMostradorEndFlag = false;
    bool basketToPlayerFlag = false;

    Vector3 ogBasketLocalPos;
    Quaternion ogBasketLocalRot;

    private void Start()
    {
        ogBasketLocalPos = basketTransform.localPosition;
        ogBasketLocalRot = basketTransform.localRotation;
    }

    private void Update()
    {
        if (basketToMostradorFlag)
        {
            MoveBasketToMostrador();
        }
        else if (basketToMostradorEndFlag)
        {
            MoveBasketToMostradorEnd();
        }
        else if (basketToPlayerFlag)
        {
            MoveBasketToPlayer();
        }


        text.text = "$ " + Mostrador.Instance.precioRestante;
    }

    public void StartMovingBasketToMostrador()
    {
        basketTransform.parent = null;
        basketToMostradorFlag = true;
    }

    void MoveBasketToMostrador()
    {
        basketTransform.position = Vector3.Lerp(basketTransform.position, targetBasketTransform.position, Time.deltaTime * 2);
        basketTransform.rotation = Quaternion.Lerp(basketTransform.rotation, Quaternion.identity, Time.deltaTime * 2);
    }

    public void StartMovingBasketToMostradorEnd()
    {
        basketToMostradorFlag = false;
        basketToMostradorEndFlag = true;
    }

    void MoveBasketToMostradorEnd()
    {
        basketTransform.position = Vector3.Lerp(basketTransform.position, targetBasketTransform.position - transform.forward * 2, Time.deltaTime * 2);
    }

    public void StartMovingBasketToPlayer()
    {
        basketTransform.parent = PlayerMovement.Instance.basketTransform;

        basketToMostradorEndFlag = false;
        basketToPlayerFlag = true;
    }

    void MoveBasketToPlayer()
    {
        basketTransform.localPosition = Vector3.Lerp(basketTransform.localPosition, ogBasketLocalPos, Time.deltaTime * 2);
        basketTransform.localRotation = Quaternion.Lerp(basketTransform.localRotation, ogBasketLocalRot, Time.deltaTime * 2);

        if (Vector3.Distance(basketTransform.localPosition, ogBasketLocalPos) < 0.01f)
        {
            EndMoveBasketToPlayer();
        }
    }

    void EndMoveBasketToPlayer()
    {
        basketTransform.localPosition = ogBasketLocalPos;
        basketTransform.localRotation = ogBasketLocalRot;

        basketToPlayerFlag = false;

        PlayerMovement.IsLocked = false;

    }

    public void ActivateAllBilletes()
    {
        Mostrador.Instance.ActualizarPaga(0);

        foreach (Billete billete in billetesTransform.GetComponentsInChildren<Billete>(true))
        {
            billete.gameObject.SetActive(true);
        }

        SetStateText(true);
    }

    public void SetStateText(bool state)
    {
        text.transform.parent.parent.gameObject.SetActive(state);
    }
}
