//#include <iostream>
//#include <iomanip>
//#include <string>
//
//using namespace std;
//
//struct Mahasiswa {
//    string nama;
//    string nim;
//    float uts, uas, tugas, nilaiAkhir;
//};
//
//float hitungNilaiAkhir(float uts, float uas, float tugas) {
//    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
//}
//
//void tampilkanHeaderTabel() {
//    cout << left << setw(15) << "Nama"
//         << setw(10) << "NIM"
//         << setw(6) << "UTS"
//         << setw(6) << "UAS"
//         << setw(6) << "Tugas"
//         << setw(10) << "Nilai Akhir" << endl;
//    cout << string(55, '-') << endl;
//}
//
//int main() {
//    Mahasiswa mhs[10];
//    int n;
//
//    cout << "Masukkan jumlah mahasiswa (max 10): ";
//    cin >> n;
//
//    if (n > 10) {
//        cout << "Jumlah mahasiswa melebihi batas maksimal!" << endl;
//        return 1;
//    }
//
//    for (int i = 0; i < n; i++) {
//        cout << "\nMahasiswa ke-" << i + 1 << ":\n";
//        cout << "Nama: ";
//        cin >> mhs[i].nama;
//        cout << "NIM: ";
//        cin >> mhs[i].nim;
//        cout << "UTS: ";
//        cin >> mhs[i].uts;
//        cout << "UAS: ";
//        cin >> mhs[i].uas;
//        cout << "Tugas: ";
//        cin >> mhs[i].tugas;
//
//        mhs[i].nilaiAkhir = hitungNilaiAkhir(mhs[i].uts, mhs[i].uas, mhs[i].tugas);
//    }
//
//    cout << "\nData Mahasiswa:\n";
//    tampilkanHeaderTabel();
//    for (int i = 0; i < n; i++) {
//        cout << left << setw(15) << mhs[i].nama
//             << setw(10) << mhs[i].nim
//             << setw(6) << mhs[i].uts
//             << setw(6) << mhs[i].uas
//             << setw(6) << mhs[i].tugas
//             << setw(10) << mhs[i].nilaiAkhir << endl;
//    }
//
//    return 0;
//}

//#include <iostream>
//#include "pelajaran.h"
//#include "pelajaran.cpp"
//
//using namespace std;
//
//int main() {
//    string namapel = "Struktur Data";
//    string kodepel = "STD";
//
//    pelajaran pel = create_pelajaran(namapel, kodepel);
//
//    tampil_pelajaran(pel);
//
//    return 0;
//}

#include <iostream>

using namespace std;

void tampilkanArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void tukarElemenArray(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

void tukarNilaiPointer(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};

    cout << "Array 1 sebelum ditukar:\n";
    tampilkanArray(arr1);

    cout << "\nArray 2 sebelum ditukar:\n";
    tampilkanArray(arr2);

    tukarElemenArray(arr1, arr2, 1, 1);

    cout << "\nArray 1 setelah ditukar:\n";
    tampilkanArray(arr1);

    cout << "\nArray 2 setelah ditukar:\n";
    tampilkanArray(arr2);

    int *ptr1 = &arr1[0][0];
    int *ptr2 = &arr2[0][0];

    tukarNilaiPointer(ptr1, ptr2);

    cout << "\nNilai yang ditunjuk oleh ptr1 setelah ditukar: " << *ptr1 << endl;
    cout << "Nilai yang ditunjuk oleh ptr2 setelah ditukar: " << *ptr2 << endl;

    return 0;
}
