using UnityEngine;

public class Billete : MonoBehaviour
{

    public GameObject outline;
    public int tipo = -1;

    bool isCurrentlySelected, isPermanentlySelected;

    float selectionCounter = 0, selectionTimer = 2;

    public SpriteRenderer spriteRenderer, outlineRenderer;

    public Sprite[] sprites;

    Vector3 ogPos, playerPos;

    bool inMostradorFlag = true;
    bool hideFlag = false;

    public static bool isLocked = false;

    private void Start()
    {
        ogPos = transform.position;
        playerPos = PlayerMovementold.Instance.transform.position + Vector3.up;
        transform.position = playerPos;

        if (tipo < 4)
        {
            outlineRenderer.sprite = sprites[9];
        }
        else
        {
            outlineRenderer.sprite = sprites[10];
        }

        spriteRenderer.sprite = sprites[tipo];

        gameObject.SetActive(false);
    }


    void Update()
    {
        if (isLocked)
        {
            StartHidding();
        }

        if (isCurrentlySelected || isPermanentlySelected)
        {
            outline.SetActive(true);
        }
        else
        {
            outline.SetActive(false);
        }

        isCurrentlySelected = false;

        if (inMostradorFlag)
        {
            transform.position = Vector3.Lerp(transform.position, ogPos, Time.deltaTime * 2);
        }
        else if (hideFlag)
        {
            transform.position = Vector3.Lerp(transform.position, playerPos, Time.deltaTime * 2);
        }
    }

    public void CurrentlySelected()
    {
        if (!isLocked)
        {
            isCurrentlySelected = true;

            if (selectionCounter > selectionTimer)
            {
                selectionCounter = 0;
                SwitchSelectedState();
            }
            selectionCounter += Time.deltaTime;

        }
    }

    void SwitchSelectedState()
    {
        isPermanentlySelected = !isPermanentlySelected;
        if (isPermanentlySelected)
        {
            Mostrador.Instance.ActualizarPaga(Billete.ObtenerValorDeBilllete(tipo));
            outlineRenderer.transform.localScale = Vector3.one * 1.5f;
        }
        else
        {
            Mostrador.Instance.ActualizarPaga(-Billete.ObtenerValorDeBilllete(tipo));
            outlineRenderer.transform.localScale = Vector3.one * 1.0795f;
        }
    }

    public void StartHidding()
    {
        inMostradorFlag = false;
        hideFlag = true;

        if (Vector3.Distance(playerPos, transform.position) < 0.1f)
        {
            Destroy(gameObject);
        }
    }

    public static int ObtenerValorDeBilllete(int tipo)
    {
        switch (tipo)
        {
            case 0: return 10;
            case 1: return 50;
            case 2: return 100;
            case 3: return 500;
            case 4: return 1000;
            case 5: return 2000;
            case 6: return 5000;
            case 7: return 10000;
            case 8: return 20000;
        }
        Debug.LogError("Tipo de billete no existente");
        return -1;
    }
}
