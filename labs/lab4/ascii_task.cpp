#include <iostream>

int main() {
    int k = 10;
    int m = k++ + --k;
    std::cout << m;

    return 0;
}

