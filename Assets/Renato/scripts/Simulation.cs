using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class Simulation {
    private string username, date;
    private int time1, time2, time3;
    private int totalItems, incorrectItems, correctItems;
    private int moneyToPay, amountPaid;
    private int productInteractions, minProductInteractions;
    private int billInteractions, minBillInteractions;
    private int greenLights, redLights;
    private int veredaSegments, noVeredaSegments;
    private int outOfRoute, inRoute; // agregar esa cagaita
    private bool productsTook;

    public Simulation(string username, string date, int totalItems) { // Estos pueden ser los primeros parámetros. A medida que se avanza en la simulación se ocupan los sets.
        this.username = username;
        this.date = date;
        this.totalItems = totalItems; // El número de objetos a comprar
    }

    public Simulation(string username, string date, int totalItems, int time1) { // Este constructor podría ser para guardar los primeros datos del camino de ida
        this.username = username;
        this.date = date;
        this.totalItems = totalItems;
        this.time1 = time1;
    }

    public string GetUsername() {
        return username;
    }

    public string GetDate() {
        return date;
    }

    public int GetFirstTime() {
        return time1;
    }

    public int GetSecondTime() {
        return time2;
    }

    public int GetThirdTime() {
        return time3;
    }

    public int GetTotalTime() {
        return time1 + time2 + time3;
    }

    public bool GetProductsTook() {
        return productsTook;
    }

    public int GetTotalItems() {
        return totalItems;
    }

    public int GetIncorrectItems() {
        return incorrectItems;
    }

    public int GetCorrectItems() {
        return correctItems;
    }

    public int GetMoneyToPay() {
        return moneyToPay;
    }

    public int GetAmountPaid() {
        return amountPaid;
    }

    public int GetDifferencePaid() {
        return moneyToPay - amountPaid;
    }

    public int GetProductInteractions() {
        return productInteractions;
    }

    public int GetMinProductInteractions() {
        return minProductInteractions;
    }

    public int GetBillInteractions() {
        return billInteractions;
    }

    public int GetMinBillInteractions() {
        return minBillInteractions;
    }

    public int GetGreenLights() {
        return greenLights;
    }

    public int GetRedLights() {
        return redLights;
    }

    public int GetVeredaSegments() {
        return veredaSegments;
    }

    public int GetNoVeredaSegments() {
        return noVeredaSegments;
    }

    public int GetOutOfRoute() {
        return outOfRoute;
    }

    public int GetInRoute() {
        return inRoute;
    }

    public void SetUsername(string username) {
        this.username = username;
    }

    public void SetDate(string date) {
        this.date = date;
    }

    public void SetFirstTime(int time1) {
        this.time1 = time1;
    }

    public void SetSecondTime(int time2) {
        this.time2 = time2;
    }

    public void SetThirdTime(int time3) {
        this.time3 = time3;
    }

    public void SetProductsTook(bool productsTook) {
        this.productsTook = productsTook;
    }

    public void SetTotalItems(int totalItems) {
        this.totalItems = totalItems;
    }

    public void SetIncorrectItems(int incorrectItems) {
        this.incorrectItems = incorrectItems;
    }

    public void SetCorrectItems(int correctItems) {
        this.correctItems = correctItems;
    }

    public void SetMoneyToPay(int moneyToPay) {
        this.moneyToPay = moneyToPay;
    }

    public void SetAmountPaid(int amountPaid) {
        this.amountPaid = amountPaid;
    }

    public void SetProductInteractions(int productInteractions) {
        this.productInteractions = productInteractions;
    }

    public void SetMinProductInteractions(int minProductInteractions) {
        this.minProductInteractions = minProductInteractions;
    }

    public void SetBillInteractions(int billInteractions) {
        this.billInteractions = billInteractions;
    }

    public void SetMinBillInteractions(int minBillInteractions) {
        this.minBillInteractions = minBillInteractions;
    }

    public void SetGreenLights(int greenLights) {
        this.greenLights = greenLights;
    }

    public void SetRedLights(int redLights) {
        this.redLights = redLights;
    }

    public void SetVeredaSegments(int veredaSegments) {
        this.veredaSegments = veredaSegments;
    }

    public void SetNoVeredaSegments(int noVeredaSegments) {
        this.noVeredaSegments = noVeredaSegments;
    }

    public void SetOutOfRoute(int outOfRoute) {
        this.outOfRoute = outOfRoute;
    }

    public void SetInRoute(int inRoute) {
        this.inRoute = inRoute;
    }
}
