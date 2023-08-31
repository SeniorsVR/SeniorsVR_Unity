using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class Cancelar : MonoBehaviour
{
    public GameObject cancelarCanvas;
    // Start is called before the first frame update
    void Start()
    {
        cancelarCanvas.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if(Input.touchCount>0 || Input.GetKey(KeyCode.Escape)){
            cancelarCanvas.SetActive(true);
        }
    }

    public void cancelarTest(){
        Screen.orientation = ScreenOrientation.Portrait;
        SceneManager.LoadScene("FirstScene");
    }

    public void reiniciarTest(){
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }
}
