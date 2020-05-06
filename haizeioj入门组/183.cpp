#include <iostream>
using namespace std;

long long ans(long long x) {
	if (x == 1) return 1;
	if (x <= 0) return 0;
	if (x > 1 && x % 2 == 0) {
		return 3 * ans(x / 2) - 1;
	} else return 3 * ans((x + 1) / 2) - 1;
}

int main() {
	ios::sync_with_stdio(false); 
	long long x;
	cin >> x;
	cout << ans(x) << endl;
	return 0;
}
