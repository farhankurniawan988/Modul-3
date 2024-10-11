#ifndef MAHASISWA_H
#define MAHASISWA_H

#include <string>

struct Mahasiswa {
    std::string nama;
    std::string nim;
    float uts, uas, tugas;
    float nilai_akhir;
};

void inputMahasiswa(Mahasiswa &m);
float hitungNilaiAkhir(const Mahasiswa &m);
void tampilkanMahasiswa(const Mahasiswa &m);
void inputArrayMahasiswa(Mahasiswa arr[], int &n, int max);
void tampilkanArrayMahasiswa(const Mahasiswa arr[], int n);

#endif
