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

void tukarIsiArray(int arr1[3][3], int arr2[3][3], int row, int col) {
    int temp = arr1[row][col];
    arr1[row][col] = arr2[row][col];
    arr2[row][col] = temp;
}

void tukarIsiPointer(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int array1[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
    int array2[3][3] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };

    int a = 10;
    int b = 20;
    int* ptr1 = &a;
    int* ptr2 = &b;

    cout << "Array 1 sebelum ditukar:" << endl;
    tampilArray(array1);
    cout << "Array 2 sebelum ditukar:" << endl;
    tampilArray(array2);

    tukarIsiArray(array1, array2, 1, 1);

    cout << "\nArray 1 setelah ditukar pada posisi [1][1]:" << endl;
    tampilArray(array1);
    cout << "Array 2 setelah ditukar pada posisi [1][1]:" << endl;
    tampilArray(array2);


    cout << "\nNilai sebelum pointer ditukar:" << endl;
    cout << "Nilai ptr1 (a): " << *ptr1 << endl;
    cout << "Nilai ptr2 (b): " << *ptr2 << endl;

    tukarIsiPointer(ptr1, ptr2);

    cout << "\nNilai setelah pointer ditukar:" << endl;
    cout << "Nilai ptr1 (a): " << *ptr1 << endl;
    cout << "Nilai ptr2 (b): " << *ptr2 << endl;

    return 0;
}
