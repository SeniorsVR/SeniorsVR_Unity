using UnityEngine;

public class PlayerActions : MonoBehaviour
{

    public float grabRange = 3;
    public float grabTime = 5;

    float grabCounter = 0;
    Seleccionable pickUpSeleccionado;

    Billete billeteSeleccionado;
    Mostrador mostradorSeleccionado;

    PlayerMovement PlayerMovement;

    public Transform mainCameraTransform;



    // Start is called before the first frame update
    void Start()
    {
        Debug.LogError("USANDO COMPONENTE OBSOLETO");
        PlayerMovement = GetComponent<PlayerMovement>();
    }

    // Update is called once per frame
    void Update()
    {
        // Obtiene la posición y dirección del raycast
        Vector3 raycastOrigin = mainCameraTransform.position;
        Vector3 raycastDirection = mainCameraTransform.forward;
        int layerMask = 1 << LayerMask.NameToLayer("Pickup") | 1 << LayerMask.NameToLayer("Billete") | 1 << LayerMask.NameToLayer("Mostrador");

        RaycastHit hit;
        if (Physics.Raycast(raycastOrigin, raycastDirection, out hit, grabRange, layerMask))
        {
            GameObject hitObject = hit.collider.gameObject;

            pickUpSeleccionado = hitObject.GetComponent<Seleccionable>();
            billeteSeleccionado = hitObject.GetComponent<Billete>();
            mostradorSeleccionado = hitObject.GetComponent<Mostrador>();
        }
        else
        {
            pickUpSeleccionado = null;
            billeteSeleccionado = null;
            mostradorSeleccionado = null;
        }

        // Dibujar el rayo en la escena para visualización
        Debug.DrawRay(raycastOrigin, raycastDirection * grabRange, Color.red, 0.1f);

        if (pickUpSeleccionado)
        {
            grabCounter += Time.deltaTime;
            pickUpSeleccionado.CurrentlySelected();

            if (grabCounter >= grabTime){
                grabCounter = 0;

                pickUpSeleccionado.Recoger();
            }
        }
        else
        {
            grabCounter = 0;
        }

        if (billeteSeleccionado)
        {
            billeteSeleccionado.CurrentlySelected();
        }

        if (mostradorSeleccionado)
        {
            mostradorSeleccionado.CurrentlySelected();
        }
    }
}
