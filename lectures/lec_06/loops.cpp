#include <iostream>

int main() {
    // int n = 1;
    // while (n <= 10) {
    //     std::cout << n << '\t' << n * n << '\n';  
	// 			// print the number and the squared number using tabulation
    //     ++n;
    // }

    int n = 0;
    while (n <= 10) {
        ++n;
        std::cout << n << '\t' << n * n << '\n';
    }
    
    return 0;
}