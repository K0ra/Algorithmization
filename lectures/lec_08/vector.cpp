#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    // int arr[n];
    std::vector<int> arr(n, 0);

    for (int i = 0; i < arr.size(); i++) {
        std::cin >> arr[i];
    }

    arr.push_back(100);

    int sum = 0;
    // 1 2 3 4 0 1
    for (int i = 0; i < n; i += 2) {
        sum += arr[i];
        // std::cout << arr[i] << " ";
    }
    for (auto element : arr) {
        sum += element;
        std::cout << element << " ";
    }

    // std::cout << sum;
}