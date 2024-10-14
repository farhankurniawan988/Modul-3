#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    string nim;
    float uts, uas, tugas, nilai_akhir;
};


float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return (0.3 * uts) + (0.4 * uas) + (0.3 * tugas);
}


void inputMahasiswa(Mahasiswa &mhs) {
    cout << "Masukkan Nama: ";
    cin.ignore(); 
    getline(cin, mhs.nama); 
    cout << "Masukkan NIM: ";
    cin >> mhs.nim;
    cout << "Masukkan Nilai UTS: ";
    cin >> mhs.uts;
    cout << "Masukkan Nilai UAS: ";
    cin >> mhs.uas;
    cout << "Masukkan Nilai Tugas: ";
    cin >> mhs.tugas;

    
    mhs.nilai_akhir = hitungNilaiAkhir(mhs.uts, mhs.uas, mhs.tugas);
}


void tampilkanMahasiswa(const Mahasiswa &mhs) {
    cout << "Nama: " << mhs.nama << endl;
    cout << "NIM: " << mhs.nim << endl;
    cout << "Nilai UTS: " << mhs.uts << endl;
    cout << "Nilai UAS: " << mhs.uas << endl;
    cout << "Nilai Tugas: " << mhs.tugas << endl;
    cout << "Nilai Akhir: " << mhs.nilai_akhir << endl;
}

int main() {
    const int jumlah_mahasiswa = 10;
    Mahasiswa data_mahasiswa[jumlah_mahasiswa];
    int n;

    cout << "Berapa jumlah mahasiswa yang akan diinput (max 10)? ";
    cin >> n;

    if(n > jumlah_mahasiswa) {
        cout << "Jumlah mahasiswa melebihi batas maksimal (10)." << endl;
        return 1;
    }

    
    for(int i = 0; i < n; i++) {
        cout << "\nMasukkan data mahasiswa ke-" << i+1 << endl;
        inputMahasiswa(data_mahasiswa[i]);
    }

    
    cout << "\nData Mahasiswa:" << endl;
    for(int i = 0; i < n; i++) {
        cout << "\nMahasiswa ke-" << i+1 << endl;
        tampilkanMahasiswa(data_mahasiswa[i]);
    }

    return 0;
}
