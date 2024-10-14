#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts, uas, tugas;
    float nilai_akhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}

int main() {
    Mahasiswa mhs[10];
    int jumlah_mhs = 0;

    while (jumlah_mhs < 10) {
        cout << "Masukkan data mahasiswa ke-" << jumlah_mhs + 1 << ":" << endl;
        cout << "Nama: ";
        getline(cin, mhs[jumlah_mhs].nama);
        cout << "NIM: ";
        getline(cin, mhs[jumlah_mhs].nim);
        cout << "Nilai UTS: ";
        cin >> mhs[jumlah_mhs].uts;
        cout << "Nilai UAS: ";
        cin >> mhs[jumlah_mhs].uas;
        cout << "Nilai Tugas: ";
        cin >> mhs[jumlah_mhs].tugas;

        mhs[jumlah_mhs].nilai_akhir = hitungNilaiAkhir(mhs[jumlah_mhs].uts, mhs[jumlah_mhs].uas, mhs[jumlah_mhs].tugas);

        jumlah_mhs++;

        char lanjut;
        cout << "Lanjut input data? (y/n): ";
        cin >> lanjut;
        cin.ignore();
        if (lanjut != 'y' && lanjut != 'Y') break;
    }

    cout << "\nData Mahasiswa:" << endl;
    for (int i = 0; i < jumlah_mhs; i++) {
        cout << i+1 << ". " << mhs[i].nama << " (NIM: " << mhs[i].nim << ")" << endl;
        cout << "   Nilai Akhir: " << mhs[i].nilai_akhir << endl;
    }

    return 0;
}