using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialArrow : MonoBehaviour
{
    public static TutorialArrow Instance;
    private void Awake()
    {
        Instance = this;
    }

    Vector3 aimPosition;//Posicion donde estara el centro de la fecha
    Vector3 aimPositionTarget;//Posicion hacia donde apunta la flecha

    Vector2 dimensionsOfCanvas;

    RectTransform rectTransform;
    public RectTransform spriteTransform;
    public RectTransform parentTransform;

    // Start is called before the first frame update
    void Start()
    {
        aimPosition += Vector3.up;

        rectTransform = gameObject.GetComponent<RectTransform>();

        dimensionsOfCanvas = parentTransform.rect.size / 2f;
        dimensionsOfCanvas *= 0.9f;
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 cameraRenderPos = Camera.main.WorldToViewportPoint(aimPosition);
        //cameraRenderPos.x = 0.8f * cameraRenderPos.x + 0.1f;
        //cameraRenderPos.y = 0.8f * cameraRenderPos.y + 0.1f;
        //cameraRenderPos.x = 1.2f * cameraRenderPos.x - 0.1f;
        //cameraRenderPos.y = 1.2f * cameraRenderPos.y - 0.1f;

        Vector2 aimCameraDirection = (cameraRenderPos - Vector3.one * 0.5f) * 2f;

        bool frenteCamera = cameraRenderPos.z >= 0;
        bool inCamera = (0 <= cameraRenderPos.x && cameraRenderPos.x < 1) && (0 <= cameraRenderPos.y && cameraRenderPos.y < 1) && (frenteCamera);

        if (inCamera)
        {

            //Rotacion
            float angle = Vector2.SignedAngle(Vector2.right, Camera.main.WorldToViewportPoint(aimPositionTarget) - Camera.main.WorldToViewportPoint(aimPosition));
            spriteTransform.localRotation = Quaternion.Lerp(spriteTransform.localRotation, Quaternion.Euler(0, 0, angle), Time.deltaTime * 7.5f);
        }
        else
        {

            //Rotacion
            Vector2 aimCameraDirectionCopy = (Camera.main.WorldToViewportPoint(aimPositionTarget) - Vector3.one * 0.5f) * 2f;
            //aimCameraDirectionCopy.y = aimCameraDirectionCopy.y * dimensionsOfCanvas.y / dimensionsOfCanvas.x;
            aimCameraDirectionCopy.x = aimCameraDirectionCopy.x * dimensionsOfCanvas.y / dimensionsOfCanvas.x;
            float correction = 90 * Mathf.Sign(cameraRenderPos.z) - 90;
            spriteTransform.localRotation = Quaternion.Lerp(spriteTransform.localRotation, Quaternion.Euler(0, 0, correction + Vector2.SignedAngle(Vector2.right, aimCameraDirectionCopy)), Time.deltaTime * 7.5f);
        }

        /**
        if (frenteCamera)
        {

            //Posicion
            float _x = TruncateVectorComponent(aimCameraDirection.x * dimensionsOfCanvas.x, dimensionsOfCanvas.x);
            float _y = TruncateVectorComponent(aimCameraDirection.y * dimensionsOfCanvas.y, dimensionsOfCanvas.y);
            Vector3 finalPosition = new Vector2(_x, _y);
            rectTransform.anchoredPosition = Vector2.Lerp(rectTransform.anchoredPosition, finalPosition, Time.deltaTime * 30f);
        }
        else
        {

            //Posicion
            //Vector2 aimCameraDirectionExtended = (Camera.main.WorldToViewportPoint(aimPositionTarget) - Vector3.one * 0.5f) * -2f;
            Vector2 aimCameraDirectionExtended = spriteTransform.localRotation * Vector2.right * 2;
            print(aimCameraDirectionExtended);

            float _x = TruncateVectorComponent(aimCameraDirectionExtended.x * dimensionsOfCanvas.x, dimensionsOfCanvas.x);
            float _y = TruncateVectorComponent(aimCameraDirectionExtended.y * dimensionsOfCanvas.y, dimensionsOfCanvas.y);
            Vector3 finalPosition = new Vector2(_x, _y);
            rectTransform.anchoredPosition = Vector2.Lerp(rectTransform.anchoredPosition, finalPosition, Time.deltaTime * 30f);
        }
        **/

        if (frenteCamera)
        {
            //Posicion
            float _x = TruncateVectorComponent(aimCameraDirection.x * dimensionsOfCanvas.x, dimensionsOfCanvas.x);
            float _y = TruncateVectorComponent(aimCameraDirection.y * dimensionsOfCanvas.y, dimensionsOfCanvas.y);
            Vector3 finalPosition = new Vector2(_x, _y);
            rectTransform.anchoredPosition = finalPosition;
        }
        else
        {
            //Posicion
            float _x = ExtendVectorComponent(-aimCameraDirection.x * dimensionsOfCanvas.x, dimensionsOfCanvas.x);
            float _y = ExtendVectorComponent(-aimCameraDirection.y * dimensionsOfCanvas.y, dimensionsOfCanvas.y);
            Vector3 finalPosition = new Vector2(_x, _y);
            rectTransform.anchoredPosition = finalPosition;
        }


    }

    float TruncateVectorComponent(float og, float max)
    {
        if (Mathf.Abs(og) > max)
        {
            og = og > 0 ? max : -max;
        }
        return og;
    }
    float ExtendVectorComponent(float og, float max)
    {
        og *= 40;
        if (Mathf.Abs(og) > max)
        {
            og = og > 0 ? max : -max;
        }
        return og;
    }

    public void SetTarget(Vector3 aimPosition, Vector3 aimPositionTarget)
    {
        gameObject.SetActive(true);
        this.aimPosition = aimPosition;
        this.aimPositionTarget = aimPositionTarget;
    }
}
