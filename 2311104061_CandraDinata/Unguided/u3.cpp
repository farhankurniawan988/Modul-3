#include <iostream>
using namespace std;

void tampilkanArray2D(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void tukarNilai(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int array2D[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int* ptr1 = &array2D[0][0]; // pointer ke elemen pertama
    int* ptr2 = &array2D[2][2]; // pointer ke elemen terakhir

    cout << "Array sebelum penukaran:\n";
    tampilkanArray2D(array2D);

    tukarNilai(ptr1, ptr2);

    cout << "\nArray setelah penukaran:\n";
    tampilkanArray2D(array2D);

    return 0;
}