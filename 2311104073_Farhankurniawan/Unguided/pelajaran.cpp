#include <iostream>
#include "pelajaran.h"
using namespace std;

// Implementasi fungsi untuk membuat pelajaran
pelajaran create_pelajaran(string namaMapel, string kodeMapel) {
    pelajaran pel;
    pel.namaMapel = namaMapel;
    pel.kodeMapel = kodeMapel;
    return pel;
}

// Implementasi prosedur untuk menampilkan pelajaran
void tampil_pelajaran(pelajaran pel) {
    cout << "Nama pelajaran: " << pel.namaMapel << endl;
    cout << "Nilai: " << pel.kodeMapel << endl;
}
