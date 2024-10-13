#include <iostream>
using namespace std;

void tampilArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void tukarArray(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    int temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

void tukarPointer(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int array1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int array2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    
    int *ptr1, *ptr2;
    int var1 = 10, var2 = 20;
    
    ptr1 = &var1;
    ptr2 = &var2;
    
    // Menampilkan array sebelum ditukar
    cout << "Array 1 sebelum ditukar:" << endl;
    tampilArray(array1);
    
    cout << "Array 2 sebelum ditukar:" << endl;
    tampilArray(array2);
    
    // Menukar elemen pada posisi tertentu (misal posisi [1][1])
    tukarArray(array1, array2, 1, 1);
    
    // Menampilkan array setelah ditukar
    cout << "\nArray 1 setelah ditukar:" << endl;
    tampilArray(array1);
    
    cout << "Array 2 setelah ditukar:" << endl;
    tampilArray(array2);
    
    // Menampilkan nilai pointer sebelum ditukar
    cout << "\nNilai ptr1: " << *ptr1 << ", ptr2: " << *ptr2 << endl;
    
    // Menukar nilai yang ditunjuk oleh pointer
    tukarPointer(ptr1, ptr2);
    
    // Menampilkan nilai pointer setelah ditukar
    cout << "Nilai ptr1 setelah ditukar: " << *ptr1 << ", ptr2: " << *ptr2 << endl;
    
    return 0;
}
