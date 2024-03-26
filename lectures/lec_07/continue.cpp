#include <iostream>

int main() {
    int a, b, c;
    std::cin >> a >> b >> c;

    // a=2 b=5 c=7
    for (; a <= b; a++) {
        if (a % c == 0) continue;
        
        // STOP PROCESSING FURTHER IN THIS ITERATION
        std::cout << a << " ";
	}

    return 0;
}