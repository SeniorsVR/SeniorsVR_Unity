using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class cancelButtons : MonoBehaviour
{
    public void cancelarTest(){
        Screen.orientation = ScreenOrientation.Portrait;
        SceneManager.LoadScene("FirstScene");
    }

    public void reiniciarTest(){
        SceneManager.LoadScene("test");
    }
}