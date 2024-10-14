#ifndef PELAJARAN_H_INCLUDED
#define PELAJARAN_H_INCLUDED

#include <string>
using namespace std;

// Definisi tipe pelajaran
struct pelajaran {
    string namaMapel;
    string kodeMapel;
};

// Fungsi untuk membuat pelajaran
pelajaran create_pelajaran(string namapel, string kodepel);

// Prosedur untuk menampilkan pelajaran
void tampil_pelajaran(pelajaran pel);

#endif
