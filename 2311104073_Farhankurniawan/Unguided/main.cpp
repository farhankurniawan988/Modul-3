#include "pelajaran.h"

int main() {
    // Deklarasi variabel untuk nama dan kode pelajaran
    string namapel = "Struktur Data";
    string kodepel = "STD";
    
    // Membuat objek pelajaran
    pelajaran pel = create_pelajaran(namapel, kodepel);
    
    // Menampilkan data pelajaran
    tampil_pelajaran(pel);

    return 0;
}
