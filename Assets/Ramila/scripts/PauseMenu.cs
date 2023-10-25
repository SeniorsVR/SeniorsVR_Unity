using UnityEngine;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour {
    public static bool isPaused = false;
    public GameObject menu;
    public GameObject playerCamera;
    public GameObject personObject;

    void Update() {
        if (Input.GetKeyDown(KeyCode.Escape)) {
            if (isPaused) {
                resume();
            } else {
                pause();
            }
        }
    }

    void pause() {
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
        menu.SetActive(true);
        Time.timeScale = 0f;
        isPaused = true;
    }

    public void resume() {
        Cursor.lockState = CursorLockMode.Locked;
        Cursor.visible = false;
        menu.SetActive(false);
        Time.timeScale = 1f;
        isPaused = false;
    }

    public void finish() {
        resume();
        personObject.SendMessage("finish");
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }
}
