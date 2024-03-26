#include <iostream>

using namespace std;

void work1(int a);
void work2(int& a);

int main() {
    // ------------------------- Reference (intro) -------------------------------
    int x = 10; // int variable
    int& ref = x; // reference
    /* 
    Other ways of typing references:
        int & ref
        or
        int &ref
    */

    // int& ref; // Error! You must assign the existing variable to the reference
    
    cout << "Value of x=" << x << "\n";     // 10
    cout << "Value of ref=" << ref << "\n"; // 10

    // ------------------------- Address output -------------------------------

    cout << "Address of x is " << &x << "\n";       // 0x61ff04
    cout << "Address of ref is " << &ref << "\n";   // 0x61ff04

    // ------------------------- Changing the reference value -------------------------------
    // Example 1:
    ref = 56; // changing value of ref modifies the value of x
    cout << "New value of x=" << x << "\n";     // 56
    cout << "New value of ref=" << ref << "\n"; // 56

    // Example 2:
    int y = x;
    ref++;

    cout << "New-new value of x=" << x << "\n";     // 57
    cout << "Value of y=" << y << "\n";             // 56
    cout << "New-new value of ref=" << ref << "\n"; // 57

    // Example 3:
    y = 20;
    ref = y; // the reference will remain attached to x, the value of x will change

    cout << ref << "\n";    // 20
    cout << x << "\n";      // 20

    // ------------------------- References use-case (functions) -------------------------------

    int a = 5;

    work1(a);   // passing by value
    cout << "work1(): " << a << "\n";   // 5

    work2(a); // passing by reference
    cout << "work2(): " << a << "\n";   // 6

    /*
    Advantages of using references:
    1) saving memory (for large data)
    2) can change data within the function (BUT be careful here,
                                            sometimes we don't want our data to change)
    */

    return 0;
}

void work1(int v) {
    v++;
}

void work2(int& i) {
    i++;
}

