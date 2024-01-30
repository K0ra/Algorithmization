#include <iostream>

int main() {
	int k = 10;
	std::cout << "unary plus" << std::endl;
	int l = +k;
	std::cout << "l: " << l << std::endl; // value of l?
	
	std::cout << "unary minus" << std::endl;
	int m = -k;
	std::cout << "m: " << m << std::endl; // value of m?
	
	// k = k + 1;
	// k++; // post increment
	// ++k; // pre increment
	std::cout << "k: " << k << "\n"; // k = 10
	// m = k++; // m = 10
	m = ++k; // m = 11
	std::cout << "m: " << m << std::endl; // value of m?
	// std::cout << "new k: " << k << "\n"; // k = 11

	// k = k - 1;
	// k--; // post decrement
	// --k; // pre decrement
	std::cout << "k: " << k << "\n"; // 10
	m = k--; // m = 10
	std::cout << "m: " << m << std::endl; // value of m?
	// std::cout << "k: " << k << "\n"; // 9

	bool t = true;
	bool u = !t;
	std::cout << "t: " << t << std::endl;
	std::cout << "u: " << u << std::endl;

	std::cout << "size of" << std::endl;
	int r = 1000000000;
	double s = -2.5;
	std::cout << "r: " << sizeof(r) << std::endl; // 4
	std::cout << "s: " << sizeof(s) << std::endl; // 8
	
	return 0;
}