#include <iostream>

int main() {
    /*
    Task 5.
        Input: Given an array of integers of size n.
        User inputs an integer x. Print the first location (index) of x in the array.
        If it does not exist, output "error".
    */
    int n;
    int x;
    std::cin >> n >> x;
    int a[n];

    for (int i = 0; i < n; ++i)
        std::cin >> a[i];
    
    bool found = false; // flag
    // Linear search - loop through all elements of the array
    for (int i = 0; i < n; ++i)
        if (a[i] == x) {
            found = true;
            std::cout << i;
        }
    
    if (!found)
        std::cout << "error";
}