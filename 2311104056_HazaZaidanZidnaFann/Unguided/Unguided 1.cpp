#include <iostream>
#include <string>

using namespace std;

const int MAX_MAHASISWA = 10;

struct Mahasiswa {
    string nama;
    string nim;
    int uts, uas, tugas;
    double nilaiAkhir;
};

// Fungsi untuk menghitung nilai akhir
double hitungNilaiAkhir(int uts, int uas, int tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}

// Fungsi untuk input data mahasiswa
void inputDataMahasiswa(Mahasiswa mhs[]) {
    for (int i = 0; i < MAX_MAHASISWA; i++) {
        cout << "Mahasiswa ke-" << i+1 << endl;
        cout << "Nama: ";
        cin >> mhs[i].nama;
        cout << "NIM: ";
        cin >> mhs[i].nim;
        cout << "Nilai UTS: ";
        cin >> mhs[i].uts;
        cout << "Nilai UAS: ";
        cin >> mhs[i].uas;
        cout << "Nilai Tugas: ";
        cin >> mhs[i].tugas;
        mhs[i].nilaiAkhir = hitungNilaiAkhir(mhs[i].uts, mhs[i].uas, mhs[i].tugas);
    }
}

// Fungsi untuk menampilkan data mahasiswa
void tampilkanDataMahasiswa(Mahasiswa mhs[]) {
    cout << "\nData Mahasiswa:\n";
    cout << "--------------------\n";
    cout << "No\tNama\tNIM\tUTS\tUAS\tTugas\tNilai Akhir\n";
    cout << "--------------------\n";
    for (int i = 0; i < MAX_MAHASISWA; i++) {
        cout << i+1 << "\t" << mhs[i].nama << "\t" << mhs[i].nim << "\t"
             << mhs[i].uts << "\t" << mhs[i].uas << "\t" << mhs[i].tugas << "\t"
             << mhs[i].nilaiAkhir << endl;
    }
}

int main() {
    Mahasiswa mahasiswa[MAX_MAHASISWA];

    inputDataMahasiswa(mahasiswa);
    tampilkanDataMahasiswa(mahasiswa);

    return 0;
}