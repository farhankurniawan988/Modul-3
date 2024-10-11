#include <iostream>

using namespace std;

// Fungsi untuk menampilkan isi array 2D
void tampilkanArray2D(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk menukarkan isi dua array 2D pada posisi tertentu
void tukarArray2D(int arr1[3][3], int arr2[3][3], int x, int y) {
    int temp = arr1[x][y];
    arr1[x][y] = arr2[x][y];
    arr2[x][y] = temp;
}

// Fungsi untuk menukarkan isi dua variabel yang ditunjuk oleh pointer
void tukarPointer(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    // Inisialisasi dua array 2D berukuran 3x3
    int array1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int array2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    // Menampilkan isi array sebelum pertukaran
    cout << "Array 1 sebelum pertukaran:" << endl;
    tampilkanArray2D(array1);
    cout << "Array 2 sebelum pertukaran:" << endl;
    tampilkanArray2D(array2);

    // Menukarkan elemen pada posisi (1, 1)
    tukarArray2D(array1, array2, 1, 1);

    // Menampilkan isi array setelah pertukaran
    cout << "\nArray 1 setelah pertukaran:" << endl;
    tampilkanArray2D(array1);
    cout << "Array 2 setelah pertukaran:" << endl;
    tampilkanArray2D(array2);

    // Inisialisasi dua pointer integer
    int* ptr1 = &array1[0][0]; // Pointer menunjuk ke elemen pertama array1
    int* ptr2 = &array2[2][2]; // Pointer menunjuk ke elemen terakhir array2

    // Menampilkan nilai sebelum pertukaran menggunakan pointer
    cout << "\nNilai sebelum pertukaran melalui pointer:" << endl;
    cout << "Nilai yang ditunjuk ptr1: " << *ptr1 << endl;
    cout << "Nilai yang ditunjuk ptr2: " << *ptr2 << endl;

    // Menukarkan nilai yang ditunjuk oleh pointer
    tukarPointer(ptr1, ptr2);

    // Menampilkan nilai setelah pertukaran menggunakan pointer
    cout << "\nNilai setelah pertukaran melalui pointer:" << endl;
    cout << "Nilai yang ditunjuk ptr1: " << *ptr1 << endl;
    cout << "Nilai yang ditunjuk ptr2: " << *ptr2 << endl;

    return 0;
}
