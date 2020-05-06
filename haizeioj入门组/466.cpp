#include <iostream>
using namespace std;
int hui(int x) {
	int m = x;
	int y = 0;
	while (m > 0) {
		y = y * 10 + m % 10;
		m /= 10;
	} 
	return (y == x) ? 1: 0;
}
int main() {
	int n;
	cin >> n;
	int t = 0;
	for (int i = 1; i <= n; i++) {
		if (hui(i)) t++;
	}
	cout << t;
	return 0;
} 
