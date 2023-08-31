using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using System.Linq;

public class Sign : MonoBehaviour {
    static private int listSize = 6;
    [SerializeField] private TMP_Text[] texts;
    public string[] objects;
    static private Dictionary <string, int> dictionary;
    public SpriteRenderer[] spriteRenderers;
    public Sprite[] sprites;
    void Start() {
        dictionary = randomObjects();
        int i = 0;
        foreach( KeyValuePair<string, int> kvp in dictionary ) {
            texts[i].text = "- " + kvp.Key + " x" + kvp.Value;
            int index = getIndex(sprites, kvp.Key);
            spriteRenderers[i].sprite = sprites[index];
            i++;
        }
    }

    public int getIndex(Sprite[] sprites, string name) {
        for (int i = 0; i < sprites.Length; i++) {
            if (sprites[i].name == name) return i;
        }
        return -1;
    }

    public Dictionary <string, int> randomObjects() {
        Dictionary <string, int> randoms = new Dictionary<string, int>();
        for (int i = 0; i < listSize; i++) {
            string randomObject = objects[Random.Range(0, objects.Length)];
            if (randoms.ContainsKey(randomObject)) {
                randoms[randomObject]++;
            } else randoms.Add(randomObject, 1);
        }
        return randoms;
    }

    static public Dictionary<string, int> getRandomElements() {
        return dictionary;
    }

    static public int getListSize() {
        return listSize;
    }
}
