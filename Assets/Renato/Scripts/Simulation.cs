using System;
using nico;

[System.Serializable]
public class Simulation {
    private string profileID, username, date, id;
    public Metricas metricas;

    public Simulation(string profileID, string username, string date) {
        this.profileID = profileID;
        this.username = username;
        this.date = date;
        metricas = new Metricas();

        Guid guid = Guid.NewGuid();
        string strID = guid.ToString();
        this.id = strID;
    }
    public string GetUsername() {
        return username;
    }

    public string GetDate() {
        return date;
    }

    public string GetProfileID() {
        return profileID;
    }

    public string GetID(){
        return id;
    }
}
