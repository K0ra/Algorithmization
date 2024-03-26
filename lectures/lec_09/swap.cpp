#include <iostream>

using namespace std;

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
    int x = 5, y = 10;
    // Swap values using references
    swap1(x, y);

    // Swap values using pointers
    swap2(&x, &y);
    cout << x << " " << y;

    return 0;
}