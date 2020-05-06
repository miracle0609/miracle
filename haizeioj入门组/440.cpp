#include <iostream>
using namespace std;

int ans(int n, int x) {
	int s;
	s = n;
	int t = 0;
	while (n != 0) {
		s = n % 10;
		n /= 10;
		if (s == x) {
			t++;
		}
	} 
	return t;
}
int main() {
	ios::sync_with_stdio(false);
	int n, x;
	cin >> n >> x;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += ans(i, x);
	}
	cout << sum << endl;
	return 0;
}
