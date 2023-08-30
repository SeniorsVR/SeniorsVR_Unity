using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Profile {
    private string name;
    private string age;
    
    public Profile(string name, string age) {
        this.name = name;
        this.age = age;
    }

    public string GetName() {
        return name;
    }

    public string GetAge() {
        return age;
    }

    public void SetName(string name) {
        this.name = name;
    }

    public void SetAge(string age) {
        this.age = age;
    }
}