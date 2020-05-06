#include <iostream>
#include <algorithm> 
#include <cmath>
using namespace std;

int main() {
	int n;
	ios::sync_with_stdio(false);
	cin >> n;
	int a[1005];
	int b[1005];
	int c[1005];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	for (int i = 1; i <= n - 1; i++) {
		b[i] = i;
	}
	sort(b + 1, b + n);
	for (int i = 1; i <= n - 1; i++) {
		c[i] = abs(a[i + 1] - a[i]);
	}
	sort(c + 1, c + n);
	
//	for (int i = 1; i <= n - 1; i++) {
//		cout << b[i] << " ";
//	}
//	cout << endl;
//	for (int i = 1; i <= n - 1; i++) {
//		cout << c[i] << " ";
//	}
	
	for (int i = 1; i <= n - 1; ) {
		if (b[i] == c[i]) {
			i++;
		} else {
			cout << "Not jolly" << endl;
			return 0;
		}
	}
	cout << "Jolly" << endl;
	return 0;
}
