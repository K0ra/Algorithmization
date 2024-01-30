#include <iostream>

double func1(int x) {
    x %= 10;
    x++;
    return x;
}

void func2(int x) {
    x %= 10;
    x++;
    std::cout << x << std::endl;
}

int main() {
    int x = 10;
    // x = func1(x);
    func2(x);
    std::cout << x;

}