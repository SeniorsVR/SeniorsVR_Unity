using UnityEngine;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine.SceneManagement;

public static class SaveSystem {
    static public void SaveProfile(Profile profile) {
        BinaryFormatter formatter = new BinaryFormatter();
        string path = string.Concat(Application.persistentDataPath, "/Profiles/", profile.GetName());
        if (!Directory.Exists(Path.Combine(Application.persistentDataPath, "Profiles"))) {
            Directory.CreateDirectory(Path.Combine(Application.persistentDataPath, "Profiles"));
        }
        FileStream stream = new FileStream(path, FileMode.Create);

        formatter.Serialize(stream, profile);
        stream.Close();
    }

    static public Profile[] LoadProfiles() {
        int i = 0;
        var filenames = Directory.GetFiles(Application.persistentDataPath + "/Profiles/");
        Profile[] profiles = new Profile[filenames.Length];
        foreach(var filename in filenames) {
            if (File.Exists(filename)) {
                BinaryFormatter formatter = new BinaryFormatter();
                FileStream stream = new FileStream(filename, FileMode.Open);

                Profile profile = formatter.Deserialize(stream) as Profile;
                stream.Close();

                profiles[i++] = profile;
            } else {
                Debug.LogError("Save file not found in " + filename);
                return null;
            }
        }
        if (profiles.Length == 0) {
            Debug.LogError("No hay nada!");
            return null;
        } else {
            return profiles;
        }
    }

    static public Profile LoadProfile(string name) {
        int i = 0;
        var filenames = Directory.GetFiles(Application.persistentDataPath + "/Profiles/");
        foreach(var filename in filenames) {
            if (File.Exists(filename)) {
                BinaryFormatter formatter = new BinaryFormatter();
                FileStream stream = new FileStream(filename, FileMode.Open);

                Profile profile = formatter.Deserialize(stream) as Profile;
                stream.Close();

                if (profile.GetName() == name) {
                    return profile;
                }
                i++;

            } else {
                Debug.LogError("Save file not found in " + filename);
                return null;
            }
        }
        return null;
    }

    static public void DeleteProfile(string name) {
        foreach (var file in Directory.GetFiles(Application.persistentDataPath + "/Profiles/")) {
            BinaryFormatter formatter = new BinaryFormatter();
            FileStream stream = new FileStream(file, FileMode.Open);

            Profile profile = formatter.Deserialize(stream) as Profile;
            if (profile.GetName() == name) {
                stream.Close();
                FileInfo file_info = new FileInfo(file);
                file_info.Delete();
                SceneManager.LoadScene("FirstScene");
                break;
            }
            stream.Close();
        }
    }

    static public void SaveSimulation(Simulation simulation) {
        BinaryFormatter formatter = new BinaryFormatter();
        string[] split = simulation.GetDate().Split(' ');
        string path = string.Concat(Application.persistentDataPath, "/Simulations/", split[0], "-", simulation.GetUsername());
        if (!Directory.Exists(Path.Combine(Application.persistentDataPath, "Simulations"))) {
            Directory.CreateDirectory(Path.Combine(Application.persistentDataPath, "Simulations"));
        }
        FileStream stream = new FileStream(path, FileMode.Create);

        formatter.Serialize(stream, simulation);
        stream.Close();
    }

    static public Simulation[] LoadSimulations() {
        int i = 0;
        var filenames = Directory.GetFiles(Application.persistentDataPath + "/Simulations/");
        Simulation[] simulations = new Simulation[filenames.Length];
        foreach(var filename in filenames) {
            if (File.Exists(filename)) {
                BinaryFormatter formatter = new BinaryFormatter();
                FileStream stream = new FileStream(filename, FileMode.Open);

                Simulation simulation = formatter.Deserialize(stream) as Simulation;
                stream.Close();

                simulations[i++] = simulation;
            } else {
                Debug.LogError("Save file not found in " + filename);
                return null;
            }
        }
        if (simulations.Length == 0) {
            Debug.LogError("No hay nada!");
            return null;
        } else {
            return simulations;
        }
    }

    static public Simulation LoadSimulation(string file, string profile) {
        int i = 0;
        var filenames = Directory.GetFiles(Application.persistentDataPath + "/Simulations/");
        foreach(var filename in filenames) {
            if (File.Exists(filename)) {
                BinaryFormatter formatter = new BinaryFormatter();
                FileStream stream = new FileStream(filename, FileMode.Open);

                Simulation simulation = formatter.Deserialize(stream) as Simulation;
                stream.Close();

                if (simulation.GetUsername() == profile && simulation.GetDate().Split(" ")[0] == file){
                    return simulation;
                }
                i++;
            } else {
                Debug.LogError("Save file not found in " + filename);
                return null;
            }
        }
        return null;
    }
}