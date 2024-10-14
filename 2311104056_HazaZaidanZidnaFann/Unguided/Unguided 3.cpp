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
}

// Fungsi untuk menukar isi dua array 2D pada posisi tertentu
void tukarElemen(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

// Fungsi untuk menukar isi dua variabel yang ditunjuk oleh pointer
void tukarPointer(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};

    cout << "Array 1 sebelum ditukar:\n";
    tampilkanArray(arr1);

    cout << "\nArray 2 sebelum ditukar:\n";
    tampilkanArray(arr2);

    // Tukar elemen pada posisi baris 1, kolom 1
    tukarElemen(arr1, arr2, 1, 1);

    cout << "\nArray 1 setelah ditukar:\n";
    tampilkanArray(arr1);

    cout << "\nArray 2 setelah ditukar:\n";
    tampilkanArray(arr2);

    // Menggunakan pointer
    int *ptr1 = &arr1[0][0];
    int *ptr2 = &arr2[0][0];

    tukarPointer(ptr1, ptr2);

    cout << "\nSetelah menukar menggunakan pointer:\n";
    cout << "Elemen pertama dari arr1: " << *ptr1 << endl;
    cout << "Elemen pertama dari arr2: " << *ptr2 << endl;

    return 0;
}