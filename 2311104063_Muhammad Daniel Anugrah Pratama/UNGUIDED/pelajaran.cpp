#include "pelajaran.h"
#include <iostream>

using namespace std;

// Implementasi fungsi create_pelajaran
pelajaran create_pelajaran(string namapel, string kodepel) {
    pelajaran pel;  // Membuat objek pelajaran
    pel.namaMapel = namapel;  // Mengisi namaMapel
    pel.kodeMapel = kodepel;  // Mengisi kodeMapel
    return pel;  // Mengembalikan objek pelajaran
}

// Implementasi prosedur tampil_pelajaran
void tampil_pelajaran(pelajaran pel) {
    cout << "nama pelajaran : " << pel.namaMapel << endl;
    cout << "nilai : " << pel.kodeMapel << endl;
}