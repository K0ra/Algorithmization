#include <iostream>
 
int main() {
    int month, year;
    std::cin >> month >> year;
 
    switch (month) {
        case 4:
        case 6:
        case 9:
        case 11:
            std::cout << "30\n";
            break;
        case 2:
            if (year % 4 == 0 && (year % 400 == 0 || year % 100 != 0)) {
                std::cout << "29\n";
            } else {
                std::cout << "28\n";
            }
            break;
        default:
            std::cout << "31\n";
    }
}