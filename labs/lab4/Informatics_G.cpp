#include <iostream>

using namespace std;

int main() {
	int k, m, n;
    cin >> k >> m >> n;
    if (n <= k) cout << m * 2 << "\n";
    if (2 * n % k == 0)
       cout << (2 * n / k) * m << "\n";
    else
       cout << (1 + (2 * n / k)) * m << "\n";

    return 0;
}