#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilai_akhir;
};

void hitungNilaiAkhir(Mahasiswa &mhs) {
    mhs.nilai_akhir = 0.3 * mhs.uts + 0.4 * mhs.uas + 0.3 * mhs.tugas;
}

void tampilkanMahasiswa(const Mahasiswa &mhs) {
    cout << "Nama: " << mhs.nama << endl;
    cout << "NIM: " << mhs.nim << endl;
    cout << "UTS: " << mhs.uts << endl;
    cout << "UAS: " << mhs.uas << endl;
    cout << "Tugas: " << mhs.tugas << endl;
    cout << "Nilai Akhir: " << mhs.nilai_akhir << endl;
}

int main() {
    Mahasiswa mahasiswa[10];
    int jumlahMahasiswa;

    cout << "Masukkan jumlah mahasiswa (max 10): ";
    cin >> jumlahMahasiswa;

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Mahasiswa " << i + 1 << ":" << endl;
        cout << "Nama: ";
        cin >> mahasiswa[i].nama;
        cout << "NIM: ";
        cin >> mahasiswa[i].nim;
        cout << "UTS: ";
        cin >> mahasiswa[i].uts;
        cout << "UAS: ";
        cin >> mahasiswa[i].uas;
        cout << "Tugas: ";
        cin >> mahasiswa[i].tugas;

        hitungNilaiAkhir(mahasiswa[i]);
    }

    cout << "\nData Mahasiswa:\n";
    for (int i = 0; i < jumlahMahasiswa; i++) {
        tampilkanMahasiswa(mahasiswa[i]);
        cout << endl;
    }

    return 0;
}