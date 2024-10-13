#ifndef PELAJARAN_H
#define PELAJARAN_H

#include <string>

struct Pelajaran {
    std::string namaMapel;
    std::string kodeMapel;
};

Pelajaran create_pelajaran(std::string nama, std::string kode) {
    Pelajaran pelajaran;
    pelajaran.namaMapel = nama;
    pelajaran.kodeMapel = kode;
    return pelajaran;
}

void tampil_pelajaran(Pelajaran pelajaran) {
    std::cout << "nama pelajaran: " << pelajaran.namaMapel << std::endl;
    std::cout << "nilai: " << pelajaran.kodeMapel << std::endl;
}

#endif
