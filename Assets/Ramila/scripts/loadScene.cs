using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class loadScene : MonoBehaviour
{
    public bool esTutorial = false;
    // Start is called before the first frame update
    void Start()
    {
        Screen.orientation = ScreenOrientation.LandscapeLeft;
        if(esTutorial){
            Invoke("comenzarTutorial",4);
            nico.TutorialManager.lastTestWasTutorial = true;
        }
        else{
            Invoke("comenzarTest",4);
            nico.TutorialManager.lastTestWasTutorial = false;
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void comenzarTest(){
        SceneManager.LoadScene("test");
    }

    private void comenzarTutorial() {
        SceneManager.LoadScene("tutorial");
    }
}
