using System.Collections;
using System.IO;
using FantomLib;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SettingsScene : MonoBehaviour {
    public GameObject weights, popupDiscard, popupConfirm, popupDownload, commonButtons, modifyButtons;
    public Slider[] sliders;
    void Start() {
        for (int i = 0; i < sliders.Length; i++) {
            sliders[i].value = SaveSystem.loadSettings().GetValues()[i];
        }
    }

    void Update() {
        if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.WindowsEditor) {
            if (Input.GetKeyDown(KeyCode.Escape) && !popupDiscard.activeSelf && !commonButtons.activeSelf) {
                popupDiscard.SetActive(true);
            } if (Input.GetKeyDown(KeyCode.Escape) && popupConfirm.activeSelf) {
                popupDiscard.SetActive(false);
            } if (Input.GetKeyDown(KeyCode.Escape) && popupDownload.activeSelf) {
                CancelDownload();
            } if (Input.GetKeyDown(KeyCode.Escape) && commonButtons.activeSelf) {
                SceneManager.LoadScene("FirstScene");
            }
        }
    }

    public void Modify() {
        weights.SetActive(true);
        modifyButtons.SetActive(true);
        commonButtons.SetActive(false);
    }

    public void Download() {
        commonButtons.SetActive(false);
        popupDownload.SetActive(true);
    }

    public void ConfirmDownload() {
        string downloadFilePath = SaveSystem.DownloadEverything();
        ToastController toastController = new ToastController();
        toastController.Show("Archivo guardado en la carpeta Descargas");
        CancelDownload();
        StartCoroutine(TakeScreenshotAndShare(downloadFilePath));
        SceneManager.LoadScene("SettingsScene");
    }

    public void CancelDownload() {
        commonButtons.SetActive(true);
        popupDownload.SetActive(false);
    }

    public void Upload() {
        SceneManager.LoadScene("UploadScene");
    }

    public void SaveChanges() {
        popupConfirm.SetActive(true);
    }

    public void DiscardChanges() {
        SceneManager.LoadScene("FirstScene");
    }

    public void ConfirmChanges() {
        float[] values = new float[sliders.Length];
        for (int i = 0; i < sliders.Length; i++) {
            values[i] = sliders[i].value;
        }
        Settings settings = new Settings(values);
        SaveSystem.saveSettings(settings);
        SceneManager.LoadScene("FirstScene");
        ToastController toastController = new ToastController();
        toastController.Show("Ajustes modificados");
    }

    public void DiscardNewChanges() {
        popupConfirm.SetActive(false);
    }

    public void RestoreChanges() {
        for (int i = 0; i < 11; i++) {
            sliders[i].value = 1;
        }
        sliders[11].value = 0.5f;
        sliders[12].value = 50;
    }

    public void GoBackButton() {
        popupDiscard.SetActive(false);
    }

    public void ChangedValue(GameObject parent) {
        TMP_Text text = parent.transform.Find("Number").GetComponent<TMP_Text>();
        float number = parent.transform.Find("Slider").GetComponent<Slider>().value;
        text.SetText(number.ToString());
    }

    private IEnumerator TakeScreenshotAndShare(string downloadFilePath) {
	    yield return new WaitForEndOfFrame();

	    new NativeShare().AddFile( downloadFilePath )
	    	.SetSubject( "Archivo CSV" ).SetText("Datos SeniorsVR")
	    	.SetCallback( ( result, shareTarget ) => Debug.Log( "Share result: " + result + ", selected app: " + shareTarget ) )
	    	.Share();
    }
}
