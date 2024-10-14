#include <iostream>
#include <string>

using namespace std;

struct pelajaran {
    string namaMapel;
    string nilaiMapel;
};

// Fungsi untuk membuat pelajaran baru
pelajaran create_pelajaran(string nama, string nilai) {
    pelajaran p;
    p.namaMapel = nama;
    p.nilaiMapel = nilai;
    return p;
}

// Fungsi untuk menampilkan informasi pelajaran
void tampil_pelajaran(pelajaran p) {
    cout << "Nama Mata Pelajaran: " << p.namaMapel << endl;
    cout << "Nilai Mata Pelajaran: " << p.nilaiMapel << endl;
}

int main() {
    // Membuat objek pelajaran
    pelajaran p1 = create_pelajaran("Struktur Data", "100");
   

    // Menampilkan informasi pelajaran
    tampil_pelajaran(p1);

    return 0;
}
