#include <iostream>

// Returns the index of element x in an array a[]
// returns -1 if there is no such element
int binary_search(int a[], int n, int x) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = (left + right) / 2;
        if (a[mid] < x)
            left = mid + 1;
        else if (a[mid] > x)
            right = mid - 1;
        else
            return mid;
    }
    return -1;
}

int main() {
    /*
    Task 6.
        Input: Given a SORTED array of integers of size n.
        User inputs an integer x. If x is found in the array, print its index.
        If it does not exist, output "error".
    */
    int n;
    int x;
    std::cin >> n >> x;
    int a[n];

    for (int i = 0; i < n; ++i)
        std::cin >> a[i];
    
    // Binary search
    int idx = binary_search(a, n, x);
    if (idx != -1)
        std::cout << "Element x is found at index " << idx;
    else
        std::cout << "error";
}