/*#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilai_akhir;
};

// Fungsi untuk menghitung nilai akhir
float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

// Fungsi untuk input data mahasiswa
void inputMahasiswa(Mahasiswa &mhs) {
    cout << "Masukkan Nama: ";
    getline(cin, mhs.nama);
    cout << "Masukkan NIM: ";
    getline(cin, mhs.nim);
    cout << "Masukkan Nilai UTS: ";
    cin >> mhs.uts;
    cout << "Masukkan Nilai UAS: ";
    cin >> mhs.uas;
    cout << "Masukkan Nilai Tugas: ";
    cin >> mhs.tugas;
    cin.ignore(); // Menghilangkan newline karakter dari buffer
    mhs.nilai_akhir = hitungNilaiAkhir(mhs.uts, mhs.uas, mhs.tugas);
}

// Fungsi untuk menampilkan data mahasiswa
void tampilkanMahasiswa(const Mahasiswa &mhs) {
    cout << "Nama: " << mhs.nama << endl;
    cout << "NIM: " << mhs.nim << endl;
    cout << "Nilai UTS: " << mhs.uts << endl;
    cout << "Nilai UAS: " << mhs.uas << endl;
    cout << "Nilai Tugas: " << mhs.tugas << endl;
    cout << "Nilai Akhir: " << mhs.nilai_akhir << endl;
}

int main() {
    const int maxMahasiswa = 10;
    Mahasiswa mahasiswa[maxMahasiswa];
    int jumlahMahasiswa;

    cout << "Masukkan jumlah mahasiswa (max 10): ";
    cin >> jumlahMahasiswa;
    cin.ignore(); // Menghilangkan newline karakter dari buffer

    if (jumlahMahasiswa > maxMahasiswa) {
        cout << "Jumlah mahasiswa tidak boleh lebih dari 10." << endl;
        return 1;
    }

    for (int i = 0; i < jumlahMahasiswa; ++i) {
        cout << "\nData Mahasiswa ke-" << (i + 1) << ":" << endl;
        inputMahasiswa(mahasiswa[i]);
    }

    cout << "\nData Semua Mahasiswa:" << endl;
    for (int i = 0; i < jumlahMahasiswa; ++i) {
        cout << "\nMahasiswa ke-" << (i + 1) << ":" << endl;
        tampilkanMahasiswa(mahasiswa[i]);
    }

    return 0;
}

*/
#ifndef PELAJARAN_H_INCLUDED
#define PELAJARAN_H_INCLUDED

#include <string>
using namespace std;

struct Pelajaran {
    string namaMapel;
    string kodeMapel;
};

Pelajaran create_pelajaran(string namaMapel, string kodeMapel);
void tampil_pelajaran(const Pelajaran &pel);

#endif // PELAJARAN_H_INCLUDED


/*
#include <iostream>

using namespace std;

void tampilkanArray(int arr[3][3]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void tukarArray(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

void tukarPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int array1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int array2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int a = 10, b = 20;

    cout << "Array 1 sebelum penukaran:" << endl;
    tampilkanArray(array1);

    cout << "\nArray 2 sebelum penukaran:" << endl;
    tampilkanArray(array2);

    tukarArray(array1, array2, 1, 1);

    cout << "\nArray 1 setelah penukaran:" << endl;
    tampilkanArray(array1);

    cout << "\nArray 2 setelah penukaran:" << endl;
    tampilkanArray(array2);

    cout << "\nNilai a dan b sebelum penukaran: a = " << a << ", b = " << b << endl;
    tukarPointer(&a, &b);
    cout << "Nilai a dan b setelah penukaran: a = " << a << ", b = " << b << endl;

    return 0;
}
