using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Senor : MonoBehaviour
{
    public GameObject neckBone;
    GameObject player;

    float escala = 1;

    public Vector3 testVector = new Vector3(180, 0, 60);

    private void Start()
    {
        player = GameObject.FindWithTag("Player");

        escala = transform.localScale.x;
    }

    void Update()
    {
        float distance = Vector3.Distance(player.transform.position, transform.position);
        if (distance < 3 * escala)
        {
            Vector3 direction = (player.transform.position - transform.position).normalized;

            Quaternion neckAngle = neckBone.transform.localRotation;
            Vector3 targetAngle = neckAngle.eulerAngles;
            targetAngle.Set(-Mathf.Asin(direction.z)*180/Mathf.PI, targetAngle.y, targetAngle.z);

            neckBone.transform.localRotation = Quaternion.Lerp(neckBone.transform.localRotation, Quaternion.Euler(targetAngle), Time.deltaTime * 5);

        }
        else
        {

            Quaternion neckAngle = neckBone.transform.localRotation;
            Vector3 targetAngle = neckAngle.eulerAngles;
            targetAngle.Set(0, targetAngle.y, targetAngle.z);

            neckBone.transform.localRotation = Quaternion.Lerp(neckBone.transform.localRotation, Quaternion.Euler(targetAngle), Time.deltaTime * 5);
        }
    }
}
