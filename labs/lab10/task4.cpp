#include <iostream>
#include <climits>

int main() {
    /*
    Task 4.
        Input: Given an array of integers of size n.
        Find the maximum number in the array.
    */
    int n;
    std::cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i)
        std::cin >> a[i];
    
    int max_num = INT_MIN;
    // int max_num = a[0] // alternative assignment if we know for sure that n >= 1
    for (int i = 0; i < n; ++i)
        max_num = std::max(max_num, a[i]); // maximum between max_num and a[i]
    
    std::cout << max_num;
}