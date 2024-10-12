#include <iostream>
using namespace std;

void tampilkanArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void tukarArray2D(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
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

    int* ptr1 = &array1[0][0];
    int* ptr2 = &array2[0][0];

    cout << "Array 1 Sebelum Penukaran:" << endl;
    tampilkanArray(array1);
    cout << "Array 2 Sebelum Penukaran:" << endl;
    tampilkanArray(array2);

    tukarArray2D(array1, array2, 1, 1);

    cout << "\nArray 1 Setelah Penukaran (1,1) dengan Array 2:" << endl;
    tampilkanArray(array1);
    cout << "Array 2 Setelah Penukaran (1,1) dengan Array 1:" << endl;
    tampilkanArray(array2);

    tukarPointer(ptr1, ptr2);

    cout << "\nNilai yang ditunjuk oleh ptr1 setelah penukaran: " << *ptr1 << endl;
    cout << "Nilai yang ditunjuk oleh ptr2 setelah penukaran: " << *ptr2 << endl;

    return 0;
}
