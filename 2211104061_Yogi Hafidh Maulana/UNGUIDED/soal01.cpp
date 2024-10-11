#include <iostream>
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

void inputMahasiswa(Mahasiswa &m);
float hitungNilaiAkhir(float uts, float uas, float tugas);

int main() {
    const int maxMahasiswa = 10;
    Mahasiswa mhs[maxMahasiswa];
    int jumlahMahasiswa;

    cout << "Masukkan jumlah mahasiswa (max. 10): ";
    cin >> jumlahMahasiswa;

    if (jumlahMahasiswa > maxMahasiswa) {
        cout << "Jumlah mahasiswa tidak boleh lebih dari 10!" << endl;
        return 1;
    }

    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Data Mahasiswa ke-" << (i + 1) << ":" << endl;
        inputMahasiswa(mhs[i]);
        mhs[i].nilai_akhir = hitungNilaiAkhir(mhs[i].uts, mhs[i].uas, mhs[i].tugas);
    }

    cout << "\nData Mahasiswa:\n";
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "Nama: " << mhs[i].nama << endl;
        cout << "NIM: " << mhs[i].nim << endl;
        cout << "UTS: " << mhs[i].uts << endl;
        cout << "UAS: " << mhs[i].uas << endl;
        cout << "Tugas: " << mhs[i].tugas << endl;
        cout << "Nilai Akhir: " << mhs[i].nilai_akhir << endl;
        cout << "-------------------" << endl;
    }

    return 0;
}

void inputMahasiswa(Mahasiswa &m) {
    cout << "Input nama: ";
    cin.ignore(); // Membersihkan newline di buffer
    getline(cin, m.nama);
    cout << "Input NIM: ";
    cin >> m.nim;
    cout << "Input nilai UTS: ";
    cin >> m.uts;
    cout << "Input nilai UAS: ";
    cin >> m.uas;
    cout << "Input nilai tugas: ";
    cin >> m.tugas;
}

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}
