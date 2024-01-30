#include <iostream>

int main() {
    int a = 10;
    int b = 5;
    std::cout << "a + b" << a + b << "\n"; // 15
    std::cout << "a - b" << a - b << "\n"; // 5
    std::cout << "a * b" << a * b << "\n"; // 50
    std::cout << "a / b" << a / b << "\n"; // 2

    int c = 5;
    double d = 5.0;
    int e = 2;
    double f = 2.0;
    std::cout << c / e << "\n"; // 2
    std::cout << c / f << "\n"; // 2.5
    std::cout << d / e << "\n"; // 2.5
    std::cout << d / f << "\n"; // 2.5

    int a = 10;
    int b = 3;
    int c = 5;
    std::cout << a % b << "\n"; // 1
    std::cout << a % c << "\n"; // 0

    // Task: given an integer, print the last digit of a number.
    // Input: 179
    // Output: 9
    // Solution: 179 % 10 = 9

    int a = 10;
    
    a += 10; // shorter form of a = a + 10
    std::cout << a << "\n"; // 20
    a -= 10;
    std::cout << a << "\n"; // 10
    a *= 10;
    std::cout << a << "\n"; // 100
    a /= 10;
    std::cout << a << "\n"; // 10
    a %= 10;
    std::cout << a << "\n"; // 0

    return 0;
}