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

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}

void tambahMahasiswa(Mahasiswa mahasiswa[], int &jumlahMahasiswa) {
    if (jumlahMahasiswa < 10) {
        cout << "Masukkan nama mahasiswa: ";
        cin >> mahasiswa[jumlahMahasiswa].nama;
        cout << "Masukkan NIM mahasiswa: ";
        cin >> mahasiswa[jumlahMahasiswa].nim;
        cout << "Masukkan nilai UTS: ";
        cin >> mahasiswa[jumlahMahasiswa].uts;
        cout << "Masukkan nilai UAS: ";
        cin >> mahasiswa[jumlahMahasiswa].uas;
        cout << "Masukkan nilai Tugas: ";
        cin >> mahasiswa[jumlahMahasiswa].tugas;

        mahasiswa[jumlahMahasiswa].nilaiAkhir = hitungNilaiAkhir(
            mahasiswa[jumlahMahasiswa].uts,
            mahasiswa[jumlahMahasiswa].uas,
            mahasiswa[jumlahMahasiswa].tugas
        );

        cout << "Data mahasiswa berhasil ditambahkan!\n";
        jumlahMahasiswa++;
    } else {
        cout << "Jumlah mahasiswa sudah mencapai batas maksimal (10).\n";
    }
}

void tampilkanDataMahasiswa(Mahasiswa mahasiswa[], int jumlahMahasiswa) {
    if (jumlahMahasiswa == 0) {
        cout << "Belum ada data mahasiswa.\n";
    } else {
        for (int i = 0; i < jumlahMahasiswa; i++) {
            cout << "Mahasiswa " << i + 1 << ":\n";
            cout << "Nama        : " << mahasiswa[i].nama << endl;
            cout << "NIM         : " << mahasiswa[i].nim << endl;
            cout << "UTS         : " << mahasiswa[i].uts << endl;
            cout << "UAS         : " << mahasiswa[i].uas << endl;
            cout << "Tugas       : " << mahasiswa[i].tugas << endl;
            cout << "Nilai Akhir : " << mahasiswa[i].nilaiAkhir << endl;
            cout << "-----------------------------\n";
        }
    }
}

int main() {
    Mahasiswa mahasiswa[10];
    int jumlahMahasiswa = 0;

    int pilihan;
    do {
        cout << "\nMenu:\n";
        cout << "1. Tambah Data Mahasiswa\n";
        cout << "2. Tampilkan Data Mahasiswa\n";
        cout << "3. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                tambahMahasiswa(mahasiswa, jumlahMahasiswa);
                break;
            case 2:
                tampilkanDataMahasiswa(mahasiswa, jumlahMahasiswa);
                break;
            case 3:
                cout << "Keluar program.\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 3);

    return 0;
}
