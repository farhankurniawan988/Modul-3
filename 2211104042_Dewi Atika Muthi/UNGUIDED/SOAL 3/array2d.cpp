#include <iostream>

const int SIZE = 3;

void displayArray(int arr[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void swapArrayElements(int arr[SIZE][SIZE], int row1, int col1, int row2, int col2) {
    int temp = arr[row1][col1];
    arr[row1][col1] = arr[row2][col2];
    arr[row2][col2] = temp;
}

void swapPointerValues(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int array1[SIZE][SIZE] = {{1, 2, 9}, {4, 2, 3}, {6, 8, 9}};
    int array2[SIZE][SIZE] = {{7, 1, 2}, {6, 5, 4}, {8, 3, 1}};

    std::cout << "Array 1 awal:" << std::endl;
    displayArray(array1);

    std::cout << "Array 2 awal:" << std::endl;
    displayArray(array2);

    // Menukar elemen pada posisi tertentu
    swapArrayElements(array1, 0, 0, 2, 2);
    std::cout << "Array 1 setelah menukar elemen (0,0) dengan (2,2):" << std::endl;
    displayArray(array1);

    // Menukar nilai menggunakan pointer
    int* ptr1 = &array1[1][1];
    int* ptr2 = &array2[1][1];

    std::cout << "Nilai yang ditunjuk ptr1 sebelum: " << *ptr1 << std::endl;
    std::cout << "Nilai yang ditunjuk ptr2 sebelum: " << *ptr2 << std::endl;

    swapPointerValues(ptr1, ptr2);

    std::cout << "Nilai yang ditunjuk ptr1 setelah: " << *ptr1 << std::endl;
    std::cout << "Nilai yang ditunjuk ptr2 setelah: " << *ptr2 << std::endl;

    std::cout << "Array 1 akhir:" << std::endl;
    displayArray(array1);

    std::cout << "Array 2 akhir:" << std::endl;
    displayArray(array2);

    return 0;
}
