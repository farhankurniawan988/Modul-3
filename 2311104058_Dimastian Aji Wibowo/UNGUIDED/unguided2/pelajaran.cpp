#include "pelajaran.h"
#include <iostream>

using namespace std;

// Implementasi fungsi create_pelajaran
Pelajaran create_pelajaran(string namapel, string kodepel) {
    Pelajaran pel;
    pel.namaMapel = namapel;
    pel.kodeMapel = kodepel;
    return pel;
}

// Implementasi prosedur tampil_pelajaran
void tampil_pelajaran(Pelajaran pel) {
    cout << "Nama Mata Pelajaran: " << pel.namaMapel << endl;
    cout << "Kode Mata Pelajaran: " << pel.kodeMapel << endl;
}
