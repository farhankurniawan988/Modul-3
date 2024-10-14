#include <iostream>

using namespace std;

struct mahasiswa {
    char nim[10];
    int nilai1, nilai2;
};

// Fungsi untuk menginput data mahasiswa
void inputMhs(mahasiswa &m);

// Fungsi untuk menghitung rata-rata nilai mahasiswa
float rata2(mahasiswa m);

int main() {
    mahasiswa mhs;
    // Memanggil fungsi untuk input data mahasiswa
    inputMhs(mhs);
    // Menampilkan rata-rata nilai
    cout << "Rata-rata = " << rata2(mhs) << endl;
    return 0;
}

// Implementasi fungsi untuk input data mahasiswa
void inputMhs(mahasiswa &m) {
    cout << "Input NIM: ";
    cin >> m.nim;
    cout << "Input nilai 1: ";
    cin >> m.nilai1;
    cout << "Input nilai 2: ";
    cin >> m.nilai2;
}

// Implementasi fungsi untuk menghitung rata-rata nilai
float rata2(mahasiswa m) {
    // Mengembalikan hasil rata-rata
    return (m.nilai1 + m.nilai2) / 2.0; // Perbaikan: gunakan 2.0 agar hasil pembagian menjadi float
}

