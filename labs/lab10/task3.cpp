#include <iostream>

int main() {
    /*
    Task 3.
        Input: Given an array of integers of size n.
        Output all elements of the array that are divisible by 3.
    */
    int n;
    std::cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i)
        std::cin >> a[i];
    
    for (int i = 0; i < n; ++i)
        if (a[i] % 3 == 0)
            std::cout << a[i] << " ";
}