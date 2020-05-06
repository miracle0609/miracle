#include <iostream>
using namespace std;
long long ans(long long  n) {
	if (n == 1) return 1;
	return n * ans(n - 1);
}
int main() {
	long long n;
	cin >> n;
	cout << ans(n) << endl;
	return 0;
}
