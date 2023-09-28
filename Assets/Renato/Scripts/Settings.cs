using System;

[System.Serializable]
public class Settings {
    private float[] values;
    public Settings(float[] values) {
        this.values = values;
    }

    public float[] GetValues() {
        return values;
    }

    public void SetValues(float[] values) {
        this.values = values;
    }
}