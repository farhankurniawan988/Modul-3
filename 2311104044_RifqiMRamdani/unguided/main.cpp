#include <iostream>
#include "pelajaran.h"
using namespace std;

int main() {
    string namapel = "Struktur Data";
    string kodepel = "STD";

    pelajaran pel = create_pelajaran(namapel, kodepel);

    // Menampilkan data pelajaran
    tampil_pelajaran(pel);

    return 0;
}

