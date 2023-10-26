using UnityEngine;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;
using UnityEngine.SceneManagement;
using System;
using nico;
using FantomLib;

public static class SaveSystem {
    static public void SaveProfile(Profile profile) {
        BinaryFormatter formatter = new BinaryFormatter();
        string path = Path.Combine(Application.persistentDataPath, "Profiles", profile.GetID());
        if (!Directory.Exists(Path.Combine(Application.persistentDataPath, "Profiles"))) {
            Directory.CreateDirectory(Path.Combine(Application.persistentDataPath, "Profiles"));
        }
        FileStream stream = new FileStream(path, FileMode.Create);

        Directory.CreateDirectory(Path.Combine(Application.persistentDataPath, "Profiles", "Data-" + profile.GetID()));
        Directory.CreateDirectory(Path.Combine(Application.persistentDataPath, "Profiles", "Data-" + profile.GetID(), "Simulations"));

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
                Debug.LogError("Perfil no encontrado");
                return null;
            }
        }
        Debug.LogError("Perfil no encontrado");
        return null;
    }

    static public void DeleteProfile(string id) {
        foreach (var file in Directory.GetFiles(Path.Combine(Application.persistentDataPath,"Profiles"))) {
            BinaryFormatter formatter = new BinaryFormatter();
            FileStream stream = new FileStream(file, FileMode.Open);

            if (Directory.Exists(Path.Combine(Application.persistentDataPath, "Profiles", "Data-" + id, "Simulations"))) {
                Directory.Delete(Path.Combine(Application.persistentDataPath, "Profiles", "Data-" + id, "Simulations"),true);
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
        string path = Path.Combine(Application.persistentDataPath, "Profiles", "Data-" + simulation.GetProfileID(), "Simulations", simulation.GetID());
        if (!Directory.Exists(Path.Combine(Application.persistentDataPath, "Profiles", "Data-" + simulation.GetProfileID(), "Simulations"))) {
            Directory.CreateDirectory(Path.Combine(Application.persistentDataPath, "Profiles", "Data-" + simulation.GetProfileID(), "Simulations"));
        }
        FileStream stream = new FileStream(path, FileMode.Create);

        formatter.Serialize(stream, simulation);
        stream.Close();
    }

    static public Simulation[] LoadAllSimulations() {
        int i = 0;
        Profile[] profiles = LoadProfiles();
        for (int j = 0; j < profiles.Length; j++) {
            var filenames = Directory.GetFiles(Path.Combine(Application.persistentDataPath, "Profiles", "Data-" + profiles[j].GetID(), "Simulations"));
            i += filenames.Length;
        }
        Simulation[] simulations = new Simulation[i];
        int k = 0;
        for (int j = 0; j < profiles.Length; j++) {
            var filenames = Directory.GetFiles(Path.Combine(Application.persistentDataPath, "Profiles", "Data-" + profiles[j].GetID(), "Simulations"));
            foreach(var filename in filenames) {
                if (File.Exists(filename)) {
                    BinaryFormatter formatter = new BinaryFormatter();
                    FileStream stream = new FileStream(filename, FileMode.Open);

                    Simulation simulation = formatter.Deserialize(stream) as Simulation;
                    stream.Close();

                    simulations[k++] = simulation;
                } else {
                    Debug.LogError("Save file not found in " + filename);
                    return null;
                }
            }
        }
        if (simulations.Length == 0) {
            Debug.LogError("No hay nada!");
        }
        return simulations;
    }

    static public Simulation[] LoadSimulations(string profileID) {
        
        try
        {
            int i = 0;
            var filenames = Directory.GetFiles(Path.Combine(Application.persistentDataPath, "Profiles", "Data-" + profileID, "Simulations"));
            Simulation[] simulations = new Simulation[filenames.Length];
            foreach (var filename in filenames)
            {
                if (File.Exists(filename))
                {
                    BinaryFormatter formatter = new BinaryFormatter();
                    FileStream stream = new FileStream(filename, FileMode.Open);

                    Simulation simulation = formatter.Deserialize(stream) as Simulation;
                    stream.Close();

                    simulations[i++] = simulation;
                }
                else
                {
                    Debug.LogError("Save file not found in " + filename);
                    return null;
                }
            }
            if (simulations.Length == 0)
            {
                Debug.Log("No hay nada simulaciones previas");
            }
            return simulations;
        }
        catch (Exception e)
        {
            Debug.LogError("No esta la carpeta lol: " + e.Message);
            return new Simulation[0];
        }
    }

    static public Simulation LoadSimulation(string profileID, string simulationID) {
        string filename = Path.Combine(Application.persistentDataPath, "Profiles", "Data-" + profileID, "Simulations", simulationID);
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

    static public void deleteSimulation(string profileID, string simulationID) {
        string filename = Path.Combine(Application.persistentDataPath, "Profiles", "Data-" + profileID, "Simulations", simulationID);
        if (File.Exists(filename)){
            File.Delete(filename);
        } else {
            Debug.LogError("Save file not found in " + filename);
        }
    }

    static public void saveSettings(Settings settings){
        BinaryFormatter formatter = new BinaryFormatter();
        string path = Path.Combine(Application.persistentDataPath, "weightData");
        if (!Directory.Exists(path)) {
            Directory.CreateDirectory(path);
        }
        FileStream stream = new FileStream(Path.Combine(path,"default"), FileMode.Create);
        formatter.Serialize(stream, settings);
        stream.Close();
    }

    static public Settings loadSettings(){
        string filename = Path.Combine(Application.persistentDataPath,"weightData","default");
        if (File.Exists(filename)){
            BinaryFormatter formatter = new BinaryFormatter();
            FileStream stream = new FileStream(filename, FileMode.Open);

            Settings settings = formatter.Deserialize(stream) as Settings;
            stream.Close();

            return settings;
        } else {
            Debug.LogError("Save file not found in " + filename);
            return null;
        }
    }

    static public string DownloadEverything() {
        Everything everything = new Everything(loadSettings(), LoadProfiles(), LoadAllSimulations());

        string profilesPath = AndroidPlugin.GetExternalStorageDirectoryDownloads(); 
        string profilesFilePath = profilesPath + "/Perfiles" + DateTime.Now.ToString("ddMMyyyy_HHmmss") + ".csv";
        using (var writer = new StreamWriter(profilesFilePath, false)) {
            writer.WriteLine("ID,Nombre,FechaNacimiento,IdSimulacion,FechaSimulacion,TiempoTotal,TiempoTotalIda,TiempoTotalVuelta,TiempoTotalKiosko,TiempoTotalCanasto," +
                             "TiempoTotalArticulos,TiempoTotalCaja,TiempoTotalIrse,SegundosMirandoObjetoInvalido,SegundosMirandoObjetosLleno,VecesRecogidoObjeto,VecesDevueltoObjeto," + 
                             "VecesMarcadoBillete,VecesDevueltoBillete,SegundosEsperandoBolsa,VueltoFinal,VecesObjetoInnecesarioRecogido,VecesObjetoNecesarioDevuelto,IrseSinBolsa,NumeroBilletesInnecesarios," + 
                             "ArticulosValidos,CrucesInvalidos,CrucesValidos,ContadorTransitaCalle,CantidadSegmentosRuta,SegmentosRutaTransitados,SegmentosFueraDeRuta,CantidadMinimaBilletes");
            writer.Flush();
            foreach (Profile tr in everything.GetProfiles()) {
                if (LoadSimulations(tr.GetID()).Length > 0) {
                    foreach (Simulation simulation in LoadSimulations(tr.GetID())){
                        string simulationContent = simulation.GetID() + "," + simulation.GetDate() + "," +
                                                   simulation.metricas.tiempo_total.ToString() + "," + simulation.metricas.tiempo_total_ida.ToString() + "," +
                                                   simulation.metricas.tiempo_total_vuelta.ToString() + "," + simulation.metricas.tiempo_total_kiosko.ToString() + "," + 
                                                   simulation.metricas.tiempo_total_canasto.ToString() + "," + simulation.metricas.tiempo_total_articulos.ToString() + "," +
                                                   simulation.metricas.tiempo_total_caja.ToString() + "," + simulation.metricas.tiempo_total_irse.ToString() + "," + 
                                                   simulation.metricas.segundos_mirando_objetos_invalido.ToString() + "," + simulation.metricas.segundos_mirando_objetos_lleno.ToString() + "," +
                                                   simulation.metricas.veces_recogido_objeto.ToString() + "," + simulation.metricas.veces_devuelto_objeto.ToString() + "," + 
                                                   simulation.metricas.veces_marcado_billete.ToString() + "," + simulation.metricas.veces_devuelto_billete.ToString() + "," +
                                                   simulation.metricas.segundos_esperando_bolsa.ToString() + "," + simulation.metricas.vuelto_final.ToString() + "," +
                                                   
                                                   simulation.metricas.veces_objeto_innecesario_recojido.ToString() + "," + simulation.metricas.veces_objeto_necesario_devuelto.ToString() + "," +
                                                   simulation.metricas.irse_sin_bolsa.ToString() + "," + simulation.metricas.numero_billetes_innecesarios.ToString() + "," + 
                                                   simulation.metricas.articulos_validos.ToString() + "," + simulation.metricas.contador_cruces_invalidos.ToString() + "," +
                                                   simulation.metricas.contador_cruces_validos.ToString() + "," + simulation.metricas.contador_transita_calle.ToString() + "," + 
                                                   simulation.metricas.cantidad_segmentos_ruta.ToString() + "," + simulation.metricas.cantidad_segmentos_ruta_transitados.ToString() + "," +
                                                   simulation.metricas.cantidad_segmentos_no_ruta.ToString() + "," + simulation.metricas.cantidad_minima_billetes.ToString();
                        writer.WriteLine(tr.GetID().ToString() + "," + tr.GetName().ToString() + "," + tr.GetAge().ToString() + "," + simulationContent);
                        writer.Flush();
                    }
                } else {
                    string nullSimulation = "0,";
                    for(int j = 0; j < 28; j++) {
                        nullSimulation += ",";
                    }
                    writer.WriteLine(tr.GetID().ToString() + "," + tr.GetName().ToString() + "," + tr.GetAge().ToString() + "," + nullSimulation);
                    writer.Flush();
                }
            }
            writer.Close();
        }
        //string settingsHeader = string.Empty;
        //string settingsContent = string.Empty;
        //int i = 0;
        //foreach (var settings in Enum.GetValues(typeof(Settings.indices))) {
        //    settingsHeader += settings + ",";
        //    settingsContent += everything.GetSettings().GetValues()[i++] + ",";
        //}
        ////Debug.Log(settingsHeader + "\n" + settingsContent);
        //string settingsPath = AndroidPlugin.GetExternalStorageDirectoryDownloads(); 
        //string settingsFilePath = settingsPath + "/Ajustes" + DateTime.Now.ToString("ddMMyyyy_HHmmss") + ".csv";
        //using (var writer = new StreamWriter(settingsFilePath, false)) {
        //    writer.WriteLine(settingsHeader + "\n" + settingsContent);
        //    writer.Flush();
        //    writer.Close();
        //}
        return profilesFilePath;
    }

    static public string[] GetFolders(string folder) {
        string mainPath = AndroidPlugin.GetExternalStorageDirectory(); 
        string [] subdirectoryEntries = Directory.GetDirectories(mainPath + folder);
        return subdirectoryEntries;
    }

    static public string[] GetFiles(string folder) {
        string mainPath = AndroidPlugin.GetExternalStorageDirectory(); 
        string [] files = Directory.GetFiles(mainPath + folder);
        return files;
    }

    static public void UploadData(string filePath) {
        string completePath = AndroidPlugin.GetExternalStorageDirectory() + "/" + filePath; 
        using (var reader = new StreamReader(completePath, false)) {
            string line = ""; line = reader.ReadLine();
            string profileID = "";
            string newProfileID = "";
            while ((line = reader.ReadLine()) != null) {
                string[] parts = line.Split(",");
                if (parts[3] != "0") {
                    Metricas metricas = new Metricas {
                        tiempo_total = (float)Convert.ToDouble(parts[5]),
                        tiempo_total_ida = (float)Convert.ToDouble(parts[6]),
                        tiempo_total_vuelta = (float)Convert.ToDouble(parts[7]),
                        tiempo_total_kiosko = (float)Convert.ToDouble(parts[8]),
                        tiempo_total_canasto = (float)Convert.ToDouble(parts[9]),
                        tiempo_total_articulos = (float)Convert.ToDouble(parts[10]),
                        tiempo_total_caja = (float)Convert.ToDouble(parts[11]),
                        tiempo_total_irse = (float)Convert.ToDouble(parts[12]),
                        segundos_mirando_objetos_invalido = (float)Convert.ToDouble(parts[13]),
                        segundos_mirando_objetos_lleno = (float)Convert.ToDouble(parts[14]),
                        veces_recogido_objeto = (int)Convert.ToInt16(parts[15]),
                        veces_devuelto_objeto = (int)Convert.ToInt16(parts[16]),
                        veces_marcado_billete = (int)Convert.ToInt16(parts[17]),
                        veces_devuelto_billete = (int)Convert.ToInt16(parts[18]),
                        segundos_esperando_bolsa = (int)Convert.ToInt16(parts[19]),
                        vuelto_final = (int)Convert.ToDouble(parts[20]),
                        veces_objeto_innecesario_recojido = (int)Convert.ToInt16(parts[21]),
                        veces_objeto_necesario_devuelto = (int)Convert.ToInt16(parts[22])
                    };
                    if (parts[23].ToString() == "True") {
                        Debug.Log(parts[23].ToString());
                        metricas.irse_sin_bolsa = true;
                    }
                    else metricas.irse_sin_bolsa = false;
                    metricas.numero_billetes_innecesarios = (int) Convert.ToInt16(parts[24]);
                    metricas.articulos_validos = (int) Convert.ToInt16(parts[25]);
                    metricas.contador_cruces_invalidos = (int) Convert.ToInt16(parts[26]);
                    metricas.contador_cruces_validos = (int) Convert.ToInt16(parts[27]);
                    metricas.contador_transita_calle = (int) Convert.ToInt16(parts[28]);
                    metricas.cantidad_segmentos_ruta = (int) Convert.ToInt16(parts[29]);
                    metricas.cantidad_segmentos_ruta_transitados = (int) Convert.ToInt16(parts[30]);
                    metricas.cantidad_segmentos_no_ruta = (int) Convert.ToInt16(parts[31]);
                    metricas.cantidad_minima_billetes = (int) Convert.ToInt16(parts[32]);
                    if (parts[0] == profileID) {
                        Simulation simulation = new Simulation(newProfileID, parts[1], parts[4], metricas);
                        SaveSimulation(simulation);
                    } else {
                        Profile profile = new Profile(parts[1], parts[2]);
                        SaveProfile(profile);
                        newProfileID = profile.GetID();

                        Simulation simulation = new Simulation(newProfileID, parts[1], parts[4], metricas);
                        SaveSimulation(simulation);
                    }
                } else {
                    Profile profile = new Profile(parts[1], parts[2]);
                    SaveProfile(profile);
                }
                // Profile profile = new Profile(parts[1], parts[2]);
                profileID = parts[0];
            }
        }
    }

    public class Everything {
        private Settings settings;
        private Profile[] profiles;
        private Simulation[] simulations;

        public Everything(Settings settings, Profile[] profiles, Simulation[] simulations) {
            this.settings = settings;
            this.profiles = profiles;
            this.simulations = simulations;
        }
        
        public Settings GetSettings() {
            return settings;
        }

        public Profile[] GetProfiles() {
            return profiles;
        }

        public Simulation[] GetSimulations() {
            return simulations;
        }
    }
}