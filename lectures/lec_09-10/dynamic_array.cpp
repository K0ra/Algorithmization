#include <iostream>

int main() {
    int size;
    std::cin >> size;
    int* array = new int[size]; // allocate the space for array from Dynamic Memory (Heap)

    for (int i = 0; i < size; i++)
        std::cin >> array[i];

    delete[] array; // free memory

    return 0;
}