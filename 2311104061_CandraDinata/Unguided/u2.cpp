#include <iostream>
#include <string>
using namespace std;

// Definisi ADT Pelajaran
struct pelajaran {
    string namaMapel;
    string kodeMapel;
};

// Fungsi untuk membuat pelajaran
pelajaran create_pelajaran(string namapel, string kodepel) {
    pelajaran pel;
    pel.namaMapel = namapel;
    pel.kodeMapel = kodepel;
    return pel;
}

// Fungsi untuk menampilkan pelajaran
void tampil_pelajaran(pelajaran pel) {
    cout << "Nama Pelajaran: " << pel.namaMapel << endl;
    cout << "Kode Pelajaran: " << pel.kodeMapel << endl;
}

int main() {
    // Inisialisasi nama pelajaran dan kode pelajaran
    string namapel = "Struktur Data";
    string kodepel = "STD";

    // Membuat pelajaran dan menampilkannya
    pelajaran pel = create_pelajaran(namapel, kodepel);
    tampil_pelajaran(pel);

    return 0;
}