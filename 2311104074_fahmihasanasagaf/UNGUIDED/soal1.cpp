#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

// Fungsi untuk menghitung nilai akhir
float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

// Fungsi untuk input data mahasiswa
void inputMahasiswa(Mahasiswa &mhs) {
    cout << "Masukkan Nama: ";
    cin.ignore();
    getline(cin, mhs.nama);  // Untuk input string yang bisa mengandung spasi
    cout << "Masukkan NIM: ";
    cin >> mhs.nim;
    cout << "Masukkan Nilai UTS: ";
    cin >> mhs.uts;
    cout << "Masukkan Nilai UAS: ";
    cin >> mhs.uas;
    cout << "Masukkan Nilai Tugas: ";
    cin >> mhs.tugas;
    mhs.nilaiAkhir = hitungNilaiAkhir(mhs.uts, mhs.uas, mhs.tugas);
}

// Fungsi untuk menampilkan data mahasiswa
void tampilkanMahasiswa(const Mahasiswa &mhs) {
    cout << "\nNama: " << mhs.nama;
    cout << "\nNIM: " << mhs.nim;
    cout << "\nNilai UTS: " << mhs.uts;
    cout << "\nNilai UAS: " << mhs.uas;
    cout << "\nNilai Tugas: " << mhs.tugas;
    cout << "\nNilai Akhir: " << mhs.nilaiAkhir << endl;
}

int main() {
    Mahasiswa mahasiswa[10]; // Array untuk menyimpan data maksimal 10 mahasiswa
    int jumlahMahasiswa;

    cout << "Masukkan jumlah mahasiswa (maksimal 10): ";
    cin >> jumlahMahasiswa;

    if (jumlahMahasiswa > 10) {
        cout << "Jumlah mahasiswa melebihi batas maksimal!" << endl;
        return 1;
    }

    // Input data mahasiswa
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "\nData Mahasiswa ke-" << i + 1 << endl;
        inputMahasiswa(mahasiswa[i]);
    }

    // Menampilkan data mahasiswa
    cout << "\nData Mahasiswa yang telah dimasukkan:\n";
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "\nMahasiswa ke-" << i + 1;
        tampilkanMahasiswa(mahasiswa[i]);
    }

    return 0;
}
