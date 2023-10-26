using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public enum AudiosTutorial {
    Introduccion = 1,
    CirculoRojo = 2,
    CirculoAmarillo = 3,
    Moverse = 4,
    Letrero = 5,
    IrCruce = 6,
    Semaforo = 7,
    Flecha = 8,
    Canasta = 9,
    Articulos = 10,
    DevolerArticulo = 11,
    LlenarCanasto = 12,
    Caja = 13,
    Billetes = 14,
    DevolverBillete = 15,
    Cajero = 16,
    Bolsa = 17,
    Irse = 18,
}

public class TutorialVoice : MonoBehaviour
{
    public static TutorialVoice Instance;

    private void Awake()
    {
        Instance = this;
    }

    AudioSource audioSource;

    Queue<AudioClip> clipQueue = new Queue<AudioClip>();

    public AudioClip[] audios;

    int coveredFlag = Mathf.RoundToInt(Mathf.Pow(2, 18) - 1);

    private void Start()
    {
        audioSource = GetComponent<AudioSource>();
    }

    void Update()
    {
        if (audioSource.isPlaying == false && clipQueue.Count > 0)
        {
            audioSource.clip = clipQueue.Dequeue();
            audioSource.Play();
        }
}

    public void PlayAudio(AudiosTutorial au)
    {
        int id = (int)au - 1;
        int flag = 1 << id;

        if ( (coveredFlag & flag) > 0)
        {
            coveredFlag -= flag;

            clipQueue.Enqueue(audios[id]);
        }
    }
}
