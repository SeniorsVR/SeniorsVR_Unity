using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CreateProfile : MonoBehaviour {
    public TMP_InputField inputName, inputAge;
    public TMP_Text namePlaceholder, agePlaceholder;
    private new string name;
    private string age;

    void Start() {
        Screen.orientation = ScreenOrientation.Portrait;
        Cursor.lockState = CursorLockMode.None;
        Cursor.visible = true;
    }

    void Update() {
        if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.WindowsEditor) {
            if (Input.GetKeyDown(KeyCode.Escape)) {
                SceneManager.LoadScene("FirstScene");
            }
        }
    }

    public void Create() {
        name = inputName.text;
        age = inputAge.text;

        if (name == "") {
            namePlaceholder.text = "Ingrese un nombre";
            namePlaceholder.color = Color.red;
        }

        if (age == "") {
            agePlaceholder.text = "Ingrese una edad";
            agePlaceholder.color = Color.red;
        }

        if (name != "" && age != "") {
            Profile profile = new Profile(name, age);
            SaveSystem.SaveProfile(profile);
            SceneManager.LoadScene("FirstScene");
        }
    }

    public void OnValueChanged() {
        name = inputName.text;
        age = inputAge.text;
        
        if (name != "") {
            namePlaceholder.text = "";
        } else {
            namePlaceholder.text = "Ej: Pedro";
            namePlaceholder.color = new Color32(50, 50, 50, 128);
        }

        if (age != "") {
            agePlaceholder.text = "";
        } else {
            agePlaceholder.text = "Ej: 65";
            agePlaceholder.color = new Color32(50, 50, 50, 128);
        }
    }

    public void OnDeselect() {
        name = inputName.text;
        age = inputAge.text;

        if (name == "") {
            namePlaceholder.text = "Ingrese un nombre";
            namePlaceholder.color = Color.red;
        }

        if (age == "") {
            agePlaceholder.text = "Ingrese una edad";
            agePlaceholder.color = Color.red;
        }
    }
}
