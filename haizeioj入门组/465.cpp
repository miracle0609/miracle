#include <iostream>
using namespace std;
long long digit(long long n, long long k) {
	if (k == 1) return n % 10;
	while (k--) {
		return digit(n / 10, k);
	}
	return 0;
}
int main() {
	long long n, k;
	cin >> n >> k;
	cout << digit(n, k) << endl;
	return 0;
}
