#include <iostream>

int main() {
	int k = 10;
	std::cout << "unary plus" << std::endl;
	int l = +k;
	std::cout << "l: " << l << std::endl; // value of l?
	
	std::cout << "unary minus" << std::endl;
	int m = -k;
	std::cout << "m: " << m << std::endl; // value of m?
	
	//k = k + 1;
	//k++;
	// ++k;
	//std::cout << "k: " << k << "\n";
	m = k++;
	// m = ++k;
	// std::cout << "m: " << m << std::endl; // value of m?	
	
	k = k - 1;
	k--;
	// --k;
	// std::cout << "k: " << k << "\n";
	// m = k--;
	// std::cout << "m: " << m << std::endl; // value of m?

	bool t = true;
	bool u = !t;
	//std::cout << "t: " << t << std::endl;
	//std::cout << "u: " << u << std::endl;
	
	return 0;
}