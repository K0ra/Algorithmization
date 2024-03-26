#include <iostream>

using namespace std;

int main() {
    int k, n;
    cin >> k >> n;
    cout << (k % 7 + n % 7 - 1 % 7) % 7 << "\n";
    return 0;
}