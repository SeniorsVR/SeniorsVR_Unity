using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using UnityEngine;

public class cancelButtons : MonoBehaviour
{
    private void Start() {
        Screen.orientation = ScreenOrientation.Portrait;
    }
    public void cancelarTest(){
        Screen.orientation = ScreenOrientation.Portrait;
        SceneManager.LoadScene("FirstScene");
    }

    public void reiniciarTest(){
        if (nico.TutorialManager.lastTestWasTutorial)
        {
            SceneManager.LoadScene("loadingSceneTutorial");
        }
        else
        {
            SceneManager.LoadScene("loadingScene");
        }
    }
}
