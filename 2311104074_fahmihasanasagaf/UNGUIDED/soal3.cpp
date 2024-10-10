#include <iostream>

using namespace std;


void tampilkanArray2D(int array[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
}


void tukarArray2D(int array1[3][3], int array2[3][3], int baris, int kolom) {

    if (baris >= 0 && baris < 3 && kolom >= 0 && kolom < 3) {
        int temp = array1[baris][kolom];
        array1[baris][kolom] = array2[baris][kolom];
        array2[baris][kolom] = temp;
    } else {
        cout << "Indeks di luar batas!" << endl;
    }
}


void tukarPointer(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {

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


    cout << "Isi Array 1:" << endl;
    tampilkanArray2D(array1);

    cout << "\nIsi Array 2:" << endl;
    tampilkanArray2D(array2);


    int baris = 1, kolom = 1;
    cout << "\nMenukar posisi (" << baris << "," << kolom << ") antara Array 1 dan Array 2." << endl;
    tukarArray2D(array1, array2, baris, kolom);


    cout << "\nIsi Array 1 setelah penukaran:" << endl;
    tampilkanArray2D(array1);

    cout << "\nIsi Array 2 setelah penukaran:" << endl;
    tampilkanArray2D(array2);


    int a = 10, b = 20;
    int *ptr1 = &a;
    int *ptr2 = &b;

    cout << "\nSebelum penukaran: a = " << a << ", b = " << b << endl;
    tukarPointer(ptr1, ptr2);
    cout << "Setelah penukaran: a = " << a << ", b = " << b << endl;

    return 0;
}
