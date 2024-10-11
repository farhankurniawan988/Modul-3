#include "mahasiswa.h"
#include <iostream>
#include <iomanip>


float hitungNilaiAkhir(const Mahasiswa &m) {
    return 0.3 * m.uts + 0.4 * m.uas + 0.3 * m.tugas;
}
void inputMahasiswa(Mahasiswa &m) {
    std::cout << "Nama: ";
    std::getline(std::cin, m.nama);
    std::cout << "NIM: ";
    std::getline(std::cin, m.nim);
    std::cout << "Nilai UTS: ";
    std::cin >> m.uts;
    std::cout << "Nilai UAS: ";
    std::cin >> m.uas;
    std::cout << "Nilai Tugas: ";
    std::cin >> m.tugas;

    std::cin.ignore();

    m.nilai_akhir = hitungNilaiAkhir(m);
    std::cout << "Nilai Akhir: " << std::fixed << std::setprecision(2) << m.nilai_akhir << std::endl;
}

void tampilkanMahasiswa(const Mahasiswa &m) {
    std::cout << "Nama: " << m.nama << ", NIM: " << m.nim
              << ", Nilai Akhir: " << m.nilai_akhir << std::endl;
}

void inputArrayMahasiswa(Mahasiswa arr[], int &n, int max) {
    n = 0;
    char lanjut;
    do {
        if (n < max) {
            inputMahasiswa(arr[n]);
            n++;
            if (n < max) {
                std::cout << "Input lagi? (y/n): ";
                std::cin >> lanjut;
                std::cin.ignore();
            }
        }
    } while (n < max && (lanjut == 'y' || lanjut == 'Y'));
}

void tampilkanArrayMahasiswa(const Mahasiswa arr[], int n) {
    for (int i = 0; i < n; i++) {
        tampilkanMahasiswa(arr[i]);
    }
}
