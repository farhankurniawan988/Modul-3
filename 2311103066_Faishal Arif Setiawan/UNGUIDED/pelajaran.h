#ifndef PELAJARAN_H
#define PELAJARAN_H

#include <string>
using namespace std;

struct pelajaran {
    string namaMapel;
    string kodeMapel;
};

// Deklarasi fungsi
pelajaran create_pelajaran(string namapel, string kodepel);

// Prosedur untuk menampilkan pelajaran
void tampil_pelajaran(pelajaran pel);

#endif
