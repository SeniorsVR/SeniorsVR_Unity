using UnityEngine;

public class PlayerMovementRenato : MonoBehaviour
{
    public static PlayerMovementRenato Instance;
    private void Awake()
    {
        Instance = this;
    }
    // lala

    public float speed = 1f;
    public float friccion = 1f;
    public float sensibility = 1f;

    [HideInInspector]
    public bool isMoving = false;
    
    [HideInInspector]
    public Vector3 cameraLookDirection = new Vector3(0,0,1);
    Vector3 realLookDirection = new Vector3(0,0,1);

    Rigidbody rb;

    public Transform cameraTransform, mainCameraTransform, basketTransform;

    [HideInInspector]
    public bool MostradorFlag = false;
    public static bool IsLocked = false;

    [HideInInspector]
    public Vector3 mostradorPosition;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        ObtainOffsetDirection();
        CheckIfMovement();
        realLookDirection = mainCameraTransform.forward; //activar cuando vr

        // Moverse si es necesario
        if (!IsLocked)
        {
            if (isMoving)
            {
                Vector3 moveDirection = cameraLookDirection;
                moveDirection.y = 0;

                rb.velocity = Vector3.Lerp(rb.velocity, moveDirection * speed, 1 - Time.deltaTime * friccion);

            }
            else
            {
                rb.velocity = Vector3.Lerp(rb.velocity, Vector3.zero, Time.deltaTime * friccion);
            }
        }
        else
        {
            IsOnMostrador();
        }

        // Ajustar direccion local de camara
        cameraLookDirection = Vector3.Lerp(cameraLookDirection, realLookDirection, Time.deltaTime*sensibility);

        cameraTransform.rotation = Quaternion.LookRotation(cameraLookDirection);
        //mainCameraTransform.rotation = cameraTransform.rotation; //desactivar cuando vr

        Vector3 basketLookDirection = cameraLookDirection;
        basketLookDirection.y = 0;
        basketTransform.rotation = Quaternion.LookRotation(basketLookDirection);
        
    }

    void ObtainOffsetDirection(){
        float rotacionHorizontal = 0;
        float rotacionVertical = 0;
        float force = 0.5f;

        if (Input.GetKey(KeyCode.W))
        {
            rotacionVertical += force;
        }
        if (Input.GetKey(KeyCode.S))
        {
            rotacionVertical -= force;
        }
        if (Input.GetKey(KeyCode.A))
        {
            rotacionHorizontal -= force;
        }
        if (Input.GetKey(KeyCode.D))
        {
            rotacionHorizontal += force;
        }

        realLookDirection = Quaternion.Euler(0, rotacionHorizontal, -rotacionVertical) * realLookDirection;
    }

    void CheckIfMovement(){
        if (Input.GetMouseButton(0) || Input.GetKey(KeyCode.Space) || Input.GetKey(KeyCode.F7))
        {
            isMoving = true;
        }
        else{
            isMoving = false;
        }
    }

    public void CollidedWithMostrador(Vector3 targetPos)
    {
        if (!MostradorFlag)
        {
            MostradorFlag = true;
            IsLocked = true;

            rb.velocity = Vector3.zero;
            mostradorPosition = targetPos;
        }
    }
    void IsOnMostrador()
    {
        transform.position = Vector3.Lerp(transform.position, mostradorPosition, Time.deltaTime * speed);
    }
}