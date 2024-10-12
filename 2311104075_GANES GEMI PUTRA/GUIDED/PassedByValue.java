package com.mycompany.modul3;

class TestPass {
    int i, j;

    // Constructor
    TestPass(int i, int j) {
        this.i = i;
        this.j = j;
    }

    // Passed by value method
    void calculate(int i, int j) {
        i = i * 10;
        j = j * 10;
        System.out.println("Nilai di dalam method (passed by value):");
        System.out.println("i = " + i);
        System.out.println("j = " + j);
    }

    // Passed by reference method
    void calculate(TestPass obj) {
        obj.i = obj.i * 10;
        obj.j = obj.j * 10;
    }
}

public class PassedByValue {

    public static void main(String[] args) {
        int x = 10, y = 20;
        TestPass z = new TestPass(50, 100);

        System.out.println("Nilai sebelum passed by value:");
        System.out.println("x = " + x);
        System.out.println("y = " + y);

        // Passed by value
        z.calculate(x, y);
        System.out.println("Nilai sesudah passed by value:");
        System.out.println("x = " + x);
        System.out.println("y = " + y);

        // Passed by reference
        System.out.println("Nilai sebelum passed by reference:");
        System.out.println("z.i = " + z.i);
        System.out.println("z.j = " + z.j);

        z.calculate(z);
        System.out.println("Nilai sesudah passed by reference:");
        System.out.println("z.i = " + z.i);
        System.out.println("z.j = " + z.j);
    }
}
