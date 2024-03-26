#include <iostream>

using namespace std;

int main() {
    // ------------------------- Pointers (intro) -------------------------------
    int x = 5;
    int *ptr = &x; // Intialize pointer of integer type

    // Definition: Pointer is a variable that stores the address of memory

    int *ptr1; // NO ERROR! We may not initialize pointer to any address

    // cout << "Address of x: " << &x << "\n";
    // cout << "Value of ptr: " << ptr << "\n";
    // cout << "Address of ptr: " << &ptr << "\n";

    ptr1 = nullptr;  // NULL pointer or NULL address

    // ------------------------- Get value stored in a memory using pointer -------------------------------

    cout << "Value of a memory to which our pointer points is "
         << *ptr << "\n"; // *ptr is DEREFERENCING the pointer,
                          // i.e. getting the value stored in the memory to which pointer points

    // *ptr is not the same as in line 8 (int *ptr)

    

    return 0;
}