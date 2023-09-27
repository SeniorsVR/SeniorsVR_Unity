using System;

[System.Serializable]
public class Profile {
    private string id;
    private string name;
    private string age;
    
    public Profile(string name, string age) {
        Guid guid = Guid.NewGuid();
        string strID = guid.ToString();
        id = strID;
        this.name = name;
        this.age = age;
    }
    public string GetID() {
        return id;
    }

    public string GetName() {
        return name;
    }

    public string GetAge() {
        return age;
    }

    public void SetID(string id) {
        this.id = id;
    }
    public void SetName(string name) {
        this.name = name;
    }

    public void SetAge(string age) {
        this.age = age;
    }
}