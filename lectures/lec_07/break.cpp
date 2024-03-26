#include <iostream>

int main() {
    // int x;
    // while (true) {
    //     std::cin >> x;
    //     if (x != 0) {
    //         std::cout << x << "\n";
    //     } else {
    //         break;
    //     }   
    // }

    int sum = 0;
	while (true) {
		int x;
	    std::cin >> x;
        if (x == 0) {
            break;
        }
	    sum += x;
	}
	std::cout << sum << "\n";

    return 0;
}