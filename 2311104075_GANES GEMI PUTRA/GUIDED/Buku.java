package com.mycompany.modul3;

public class Buku {

    private String judul;
    private String pengarang;

    // Constructor tanpa parameter, memanggil constructor dengan 2 parameter
    public Buku() {
        this("Rumah Kita", "Goodbles"); // Memanggil constructor dengan 2 parameter
    }

    // Constructor dengan 2 parameter
    public Buku(String judul, String pengarang) {
        this.judul = judul;
        this.pengarang = pengarang;
    }

    // Method untuk mencetak data buku ke layar
    public void cetakKeLayar() {
        System.out.println("Judul: " + judul + "\nPengarang: " + pengarang);
    }

    public static void main(String[] args) {
        // Membuat objek buku dengan 2 parameter
        Buku a = new Buku("Jurassic Park", "Michael Crichton");
        // Membuat objek buku dengan constructor tanpa parameter
        Buku b = new Buku();

        // Mencetak informasi buku a dan b
        a.cetakKeLayar();
        b.cetakKeLayar();
    }
}

