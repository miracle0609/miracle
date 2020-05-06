#include <iostream>
using namespace std;

int gcd(int a, int b) {
	return (a % b == 0) ? b : gcd(b, a % b);
}
int main() {
	int m, n;
	cin >> m >> n;
	cout << gcd(m, n) << endl;
	return 0;
}
