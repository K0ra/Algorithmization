#include <iostream>

int main() {
    /*
    Task 2.
        Input: Given an array of integers of size n.
        Output the elements of the array with odd indices.
    */
    int n;
    std::cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i)
        std::cin >> a[i];
    
    // Odd indices start from 1 with the step of 2
    // 1, 3, 5, ...
    for (int i = 1; i < n; i += 2)
        std::cout << a[i] << " ";
}