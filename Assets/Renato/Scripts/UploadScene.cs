using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using FantomLib;
using TMPro;
using UnityEngine;
using UnityEngine.Android;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class UploadScene : MonoBehaviour {
    public TMP_Text nameTextFolder, nameTextFile, confirmText, dateText;
    public GameObject directoriesGameObject, folder, file, empty, popup;
    public Sprite sprite;
    [SerializeField]
    private string[] directories, files;
    private GameObject[] folderClones, fileClones;
    private string currentPath, selectedFile;
    void Start() {
        //Screen.sleepTimeout = SleepTimeout.NeverSleep;
        currentPath = ""; selectedFile = "";
        if (!Permission.HasUserAuthorizedPermission(Permission.ExternalStorageWrite)) { // For SD Cards I think
            Permission.RequestUserPermission(Permission.ExternalStorageWrite);
        } else {
            UpdateFilesAndFolders("");
        }
    }

    void Update() {
        if (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.WindowsEditor)  {
            if (Input.GetKeyDown(KeyCode.Escape)) {
                popup.SetActive(false);
                directoriesGameObject.SetActive(true);
                if (currentPath == "") {
                    SceneManager.LoadScene("FirstScene");
                    //Screen.sleepTimeout = SleepTimeout.SystemSetting;
                } else {
                    string[] parts = currentPath.Split('/');
                    if (parts.Length >= 2) {
                        Array.Resize(ref parts, parts.Length - 1);
    
                        string resultString = string.Join("/", parts);
                        currentPath = resultString;
                    }
                    if (parts.Length == 1) {
                        currentPath = "";
                    }
                    UpdateFilesAndFolders(currentPath);
                }
            }
        }
    }

    void UpdateFilesAndFolders(string folderString) {
        directories = SaveSystem.GetFolders(folderString);
        files = SaveSystem.GetFiles(folderString);
        if (folderClones != null) {
            foreach (GameObject folderClone in folderClones) {
                Destroy(folderClone);
            }
        }

        if (fileClones != null) {
            foreach (GameObject fileClone in fileClones) {
                Destroy(fileClone);
            }
        }

        if (directories.Length > 0) {
            folderClones = new GameObject[directories.Length];
        } if (files.Length > 0) {
            fileClones = new GameObject[files.Length];
        }

        if (directories.Length + files.Length == 0) {
            empty.SetActive(true);
            directoriesGameObject.SetActive(false);
            Debug.LogError("No hay nada!");
        } else {
            if (directories.Length == 0) {
                folder.SetActive(false);
            }
            if (files.Length == 0) {
                file.SetActive(false);
            }
            empty.SetActive(false);
            directoriesGameObject.SetActive(true);
            for (int i = 0; i < directories.Length; i++) {
                if (i == 0) {
                    folder.SetActive(true);
                    nameTextFolder.text = directories[0].Split("/")[^1];
                    folder.name = "Folder\\" + directories[^1].Split("/")[^1];
                    GameObject firstClone = Instantiate(folder, new Vector3(folder.transform.position.x, folder.transform.position.y, 0), Quaternion.identity, GameObject.FindGameObjectWithTag("Profiles").transform);
                    firstClone.SetActive(false);
                    folderClones[0] = firstClone;
                } else {
                    GameObject folderClone = Instantiate(folder, new Vector3(folder.transform.position.x, folder.transform.position.y - 220* i, 0), Quaternion.identity, GameObject.FindGameObjectWithTag("Profiles").transform);
                    nameTextFolder.text = directories[i].Split("/")[^1];
                    folderClone.name = "Folder\\" + directories[i - 1].Split("/")[^1];
                    folderClone.SetActive(true);
                    folderClones[i] = folderClone;
                }
                dateText.SetText("");
            }
            for (int i = 0; i < files.Length; i++) {
                if (i == 0) {
                    file.SetActive(true);
                    nameTextFile.text = files[0].Split("/")[^1];
                    file.name = "File/" + files[^1].Split("/")[^1];
                    dateText.SetText(Directory.GetLastWriteTime(files[i]).ToString("dd/MM/yyyy HH:mm"));
                    GameObject firstClone = Instantiate(file, new Vector3(file.transform.position.x, file.transform.position.y - 220*directories.Length, 0), Quaternion.identity, GameObject.FindGameObjectWithTag("Profiles").transform);
                    firstClone.SetActive(false);
                    fileClones[0] = firstClone;
                } else {
                    GameObject fileClone = Instantiate(file, new Vector3(file.transform.position.x, file.transform.position.y - 220*(i + directories.Length), 0), Quaternion.identity, GameObject.FindGameObjectWithTag("Profiles").transform);
                    nameTextFile.text = files[i].Split("/")[^1];
                    dateText.SetText(Directory.GetLastWriteTime(files[i]).ToString("dd/MM/yyyy HH:mm"));
                    fileClone.name = "File/" + files[i - 1].Split("/")[^1];
                    fileClone.SetActive(true);
                    fileClones[i] = fileClone;
                }
            }
        }
    }

    public void LoadFirstScene() {
        SceneManager.LoadScene("FirstScene");
    }

    public void Click(GameObject gameObject) {
        if (gameObject.name.Split("\\")[0] == "Folder") {
            currentPath += "/" + gameObject.name.Split("\\")[1];
            UpdateFilesAndFolders(currentPath);
        } if (gameObject.name.Split("/")[0] == "File") {
            selectedFile = currentPath + "/" + gameObject.name.Split("/")[1];
            popup.SetActive(true);
            directoriesGameObject.SetActive(false);
            confirmText.SetText("¿De verdad quieres subir el archivo " + gameObject.name.Split("/")[1] + " a esta aplicación?");
        }
    }

    public void Upload() {
        SaveSystem.UploadData(selectedFile);
        SceneManager.LoadScene("FirstScene");
        ToastController toastController = new ToastController();
        toastController.Show("Datos cargados correctamente");
        //Screen.sleepTimeout = SleepTimeout.SystemSetting;
    }

    public void Cancel() {
        popup.SetActive(false);
        directoriesGameObject.SetActive(true);
    }
}