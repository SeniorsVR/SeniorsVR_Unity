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
        switch(Random.Range(1,4)){
            case 1:
                SceneManager.LoadScene("test");
                break;
            case 2:
                SceneManager.LoadScene("test 2");
                break;
            case 3:
                SceneManager.LoadScene("test 3");
                break;
        }
    }

    private void comenzarTutorial() {
        SceneManager.LoadScene("tutorial");
    }
}
