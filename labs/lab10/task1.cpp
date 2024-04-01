#include <iostream>

int main() {
    /*
    Task 1.
        Input: Given an array of integers of size 3.
        Print the sum and average of all elements of the array (without loops)
    */
    int n = 3;
    int a[n];
    std::cin >> a[0] >> a[1] >> a[2];

    int sum = a[0] + a[1] + a[2];
    std::cout << "Sum: " << sum << "\n";
    std::cout << "Average: " << static_cast<double>(sum) / 3;
}