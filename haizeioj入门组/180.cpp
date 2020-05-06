#include <iostream>
using namespace std;
long long pow(long long n) {
	long long a = 2;
	long long res = 1;
	while (n > 0) {
		if (n & 1) res *= a;
		a *= a;
		n >>= 1;
	}
	return res;
}
int main() {
	long long n;
	cin >> n;
	cout << pow(n) << endl;
	return 0;
}
