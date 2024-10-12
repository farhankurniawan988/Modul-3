package com.mycompany.modul3;

public class Testpass {
    int i;
    int j;

    Testpass(int i, int j) {
        this.i = i;
        this.j = j;
    }

    // Method untuk pass by value
    void calculate(int a, int b) {
        a += 10;  // Mengubah nilai a
        b += 20;  // Mengubah nilai b
    }

    // Method untuk pass by reference
    void calculate(Testpass obj) {
        obj.i += 10;  // Mengubah nilai i di dalam objek
        obj.j += 20;  // Mengubah nilai j di dalam objek
    }

    public static void main(String[] args) {
        Testpass obj = new Testpass(5, 10);

        // Pass by value
        int a = 3;
        int b = 7;
        obj.calculate(a, b);
        System.out.println("a: " + a + ", b: " + b);  // Output: a: 3, b: 7

        // Pass by reference
        obj.calculate(obj);
        System.out.println("i: " + obj.i + ", j: " + obj.j);  // Output: i: 15, j: 30
    }
}
