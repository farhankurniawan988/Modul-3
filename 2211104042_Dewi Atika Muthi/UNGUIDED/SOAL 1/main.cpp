#include "mahasiswa.h"
#include <iostream>

int main() {
    const int MAX_MAHASISWA = 10;
    Mahasiswa daftarMahasiswa[MAX_MAHASISWA];
    int jumlahMahasiswa = 0;

    inputArrayMahasiswa(daftarMahasiswa, jumlahMahasiswa, MAX_MAHASISWA);
    std::cout << "\nDaftar Mahasiswa:" << std::endl;
    tampilkanArrayMahasiswa(daftarMahasiswa, jumlahMahasiswa);

    return 0;
}
