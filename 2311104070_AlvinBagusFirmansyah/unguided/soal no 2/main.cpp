#include <iostream>
#include "pelajaran.h" // Memasukkan file header pelajaran.h

using namespace std;

int main() {
    string namapel = "Struktur Data"; // Inisialisasi nama pelajaran
    string kodepel = "STD"; // Inisialisasi kode pelajaran

    pelajaran pel = create_pelajaran(namapel, kodepel); // Panggil fungsi create_pelajaran
    tampil_pelajaran(pel); // Panggil fungsi tampil_pelajaran

    return 0;
}
