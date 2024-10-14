#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    double uts;
    double uas;
    double tugas;
    double nilai_akhir;
};

double hitungNilaiAkhir(double uts, double uas, double tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}

int main() {
    const int MAX_MAHASISWA = 10;
    Mahasiswa data_mahasiswa[MAX_MAHASISWA];

    for (int i = 0; i < MAX_MAHASISWA; ++i) {
        cout << "Masukkan data mahasiswa ke-" << i+1 << ":" << endl;
        cout << "Nama: ";
        cin >> data_mahasiswa[i].nama;
        cout << "NIM: ";
        cin >> data_mahasiswa[i].nim;
        cout << "UTS: ";
        cin >> data_mahasiswa[i].uts;
        cout << "UAS: ";
        cin >> data_mahasiswa[i].uas;
        cout << "Tugas: ";
        cin >> data_mahasiswa[i].tugas;

        data_mahasiswa[i].nilai_akhir = hitungNilaiAkhir(data_mahasiswa[i].uts, data_mahasiswa[i].uas, data_mahasiswa[i].tugas);

        cout << endl;
    }

    cout << "Data Mahasiswa:" << endl;
    for (int i = 0; i < MAX_MAHASISWA; ++i) {
        cout << "Mahasiswa ke-" << i+1 << ":" << endl;
        cout << "Nama: " << data_mahasiswa[i].nama << endl;
        cout << "NIM: " << data_mahasiswa[i].nim << endl;
        cout << "UTS: " << data_mahasiswa[i].uts << endl;
        cout << "UAS: " << data_mahasiswa[i].uas << endl;
        cout << "Tugas: " << data_mahasiswa[i].tugas << endl;
        cout << "Nilai Akhir: " << data_mahasiswa[i].nilai_akhir << endl;
        cout << endl;
    }

    return 0;
}
