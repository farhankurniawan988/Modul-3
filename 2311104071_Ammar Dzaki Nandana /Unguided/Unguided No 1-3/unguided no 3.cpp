#include <iostream>
using namespace std;

const int SIZE = 3;

void tampilkanArray(int arr[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void tukarElemenArray(int arr1[SIZE][SIZE], int arr2[SIZE][SIZE], int x, int y) {
    int temp = arr1[x][y];
    arr1[x][y] = arr2[x][y];
    arr2[x][y] = temp;
}

void tukarPointer(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int array1[SIZE][SIZE] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int array2[SIZE][SIZE] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    
    int *pointer1, *pointer2;
    int var1 = 10, var2 = 20;
    pointer1 = &var1;
    pointer2 = &var2;

    cout << "Array 1 sebelum pertukaran:" << endl;
    tampilkanArray(array1);

    cout << "\nArray 2 sebelum pertukaran:" << endl;
    tampilkanArray(array2);

    cout << "\nMenukar elemen array pada posisi (1,1):" << endl;
    tukarElemenArray(array1, array2, 1, 1);

    cout << "\nArray 1 setelah pertukaran:" << endl;
    tampilkanArray(array1);

    cout << "\nArray 2 setelah pertukaran:" << endl;
    tampilkanArray(array2);

    cout << "\nNilai sebelum pertukaran pointer:" << endl;
    cout << "Var1: " << var1 << ", Var2: " << var2 << endl;

    tukarPointer(pointer1, pointer2);

    cout << "\nNilai setelah pertukaran pointer:" << endl;
    cout << "Var1: " << var1 << ", Var2: " << var2 << endl;

    return 0;
}
