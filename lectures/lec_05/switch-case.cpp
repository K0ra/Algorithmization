#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x; 
    
    switch(x) {
        case 0:
            cout << "Zero\n";
            break;
        case 1:
            cout << "One\n";
            break;
        case 2:
            cout << "Two\n";
            break;
        default:
            cout << "Not one or two =(\n";
            break;
    }

    return 0;
}