#include <iostream>
using namespace std;

// Fungsi untuk menampilkan isi array 2D
void tampilkanArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

// Fungsi untuk menukar isi dari 2 array integer 2D pada posisi tertentu
void tukarArrayPosisi(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

// Fungsi untuk menukar isi dari variabel yang ditunjuk oleh 2 buah pointer
void tukarPointer(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    // Membuat 2 buah array 2D integer berukuran 3x3
    int array1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int array2[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};

    // Membuat 2 buah pointer integer
    int a = 100, b = 200;
    int *ptr1 = &a, *ptr2 = &b;

    cout << "Array 1 awal:" << endl;
    tampilkanArray(array1);

    cout << "Array 2 awal:" << endl;
    tampilkanArray(array2);

    cout << "Menukar elemen pada posisi [1][1]" << endl;
    tukarArrayPosisi(array1, array2, 1, 1);

    cout << "Array 1 setelah penukaran:" << endl;
    tampilkanArray(array1);

    cout << "Array 2 setelah penukaran:" << endl;
    tampilkanArray(array2);

    cout << "Nilai pointer awal: *ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;
    tukarPointer(ptr1, ptr2);
    cout << "Nilai pointer setelah penukaran: *ptr1 = " << *ptr1 << ", *ptr2 = " << *ptr2 << endl;

    return 0;
}