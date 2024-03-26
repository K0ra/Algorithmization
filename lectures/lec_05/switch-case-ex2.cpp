#include <iostream>

using namespace std;

// "3 + 7 * (3 + 19)"

int main() {
    double a, b;
    cin >> a >> b;
    char op;
    cin >> op;

    switch(op) {
        case '+':
            cout << a + b << "\n";
            break;
        case '-':
            cout << a - b << "\n";
            break;
        case '*':
            cout << a * b << "\n";
            break;
        case '/':
            cout << a / b << "\n";
            break;
        default:
            break;
    }

    return 0;
}