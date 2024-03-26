#include <iostream>

int main() {
    int n;
    std::cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int sum = 0;
    // 1 2 3 4 0 1
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        // std::cout << arr[i] << " ";
    }
    std::cout << sum;
}