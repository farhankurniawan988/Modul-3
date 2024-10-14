include <iostream>
#include "pelajaran.h"
#include "pelajaran.cpp"

using namespace std;

int main() {
    string namapel = "Struktur Data";
    string kodepel = "STD";

    pelajaran pel = create_pelajaran(namapel, kodepel);  // Panggil fungsi create_pelajaran
    tampil_pelajaran(pel);  // Tampilkan hasil

    return 0;
}