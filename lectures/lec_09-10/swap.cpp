#include <iostream>

using namespace std;

void swap(int, int);
void swap1(int&, int&);
void swap2(int*, int*);

// Swaps two values using copies of values
void swap(int x, int y) {
    int t = x;
    x = y;
    y = t;
}

// Swaps two values using references
void swap1(int &x, int &y) {
    int t = x;
    x = y;
    y = t;
}

// Swaps two values using pointers
void swap2(int* x, int* y) {
    int t = *x;
    *x = *y;
    *y = t;
}

int main() {
    int x = 1;
    int y = 2;

    // Swap passing variables as values
    swap(x, y);
    cout << x << " " << y;

    // Swap values using references
    swap1(x, y);
    cout << x << " " << y;

    // Swap values using pointers
    swap2(&x, &y);
    cout << x << " " << y;

    return 0;
}