using UnityEngine;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine.SceneManagement;

public static class SaveSystem {
    static public void SaveProfile(Profile profile) {
        BinaryFormatter formatter = new BinaryFormatter();
        string path = Path.Combine(Application.persistentDataPath, "Profiles", profile.GetName());
        if (!Directory.Exists(Path.Combine(Application.persistentDataPath, "Profiles"))) {
            Directory.CreateDirectory(Path.Combine(Application.persistentDataPath, "Profiles"));
        }
        FileStream stream = new FileStream(path, FileMode.Create);

        Directory.CreateDirectory(Path.Combine(Application.persistentDataPath, "Profiles", profile.GetID()));
        Directory.CreateDirectory(Path.Combine(Application.persistentDataPath, "Profiles", profile.GetID(), "Simulations"));

        formatter.Serialize(stream, profile);
        stream.Close();
    }

    static public Profile[] LoadProfiles() {
        if (!Directory.Exists(Path.Combine(Application.persistentDataPath, "Profiles"))) {
            Directory.CreateDirectory(Path.Combine(Application.persistentDataPath, "Profiles"));
        }
        int i = 0;
        var filenames = Directory.GetFiles(Path.Combine(Application.persistentDataPath,"Profiles"));
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

    static public Profile LoadProfile(string id) {
        int i = 0;
        var filenames = Directory.GetFiles(Path.Combine(Application.persistentDataPath,"Profiles"));
        foreach(var filename in filenames) {
            if (File.Exists(filename)) {
                BinaryFormatter formatter = new BinaryFormatter();
                FileStream stream = new FileStream(filename, FileMode.Open);

                Profile profile = formatter.Deserialize(stream) as Profile;
                stream.Close();

                if (profile.GetID() == id) {
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

    static public void DeleteProfile(string id) {
        foreach (var file in Directory.GetFiles(Path.Combine(Application.persistentDataPath,"Profiles"))) {
            BinaryFormatter formatter = new BinaryFormatter();
            FileStream stream = new FileStream(file, FileMode.Open);

            if (Directory.Exists(Path.Combine(Application.persistentDataPath, "Profiles", id, "Simulations"))) {
                Directory.Delete(Path.Combine(Application.persistentDataPath, "Profiles", id, "Simulations"),true);
            }

            Profile profile = formatter.Deserialize(stream) as Profile;
            if (profile.GetID() == id) {
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
        string path = Path.Combine(Application.persistentDataPath, "Profiles", simulation.GetProfileID(), "Simulations", simulation.GetID());
        if (!Directory.Exists(Path.Combine(Application.persistentDataPath, "Profiles", simulation.GetProfileID(), "Simulations"))) {
            Directory.CreateDirectory(Path.Combine(Application.persistentDataPath, "Profiles", simulation.GetProfileID(), "Simulations"));
        }
        FileStream stream = new FileStream(path, FileMode.Create);

        formatter.Serialize(stream, simulation);
        stream.Close();
    }

    static public Simulation[] LoadSimulations(string profileID) {
        int i = 0;
        var filenames = Directory.GetFiles(Path.Combine(Application.persistentDataPath, "Profiles", profileID, "Simulations"));
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
        }
        return simulations;
    }

    static public Simulation LoadSimulation(string profileID, string simulationID) {
        string filename = Path.Combine(Application.persistentDataPath, "Profiles", profileID, "Simulations", simulationID);
        if (File.Exists(filename)){
            BinaryFormatter formatter = new BinaryFormatter();
            FileStream stream = new FileStream(filename, FileMode.Open);

            Simulation simulation = formatter.Deserialize(stream) as Simulation;
            stream.Close();

            return simulation;
        } else {
            Debug.LogError("Save file not found in " + filename);
            return null;
        }
    }
}