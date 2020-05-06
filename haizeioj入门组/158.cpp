#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = n; i > 0; i--) {
		for (int j = 0; j < n - i; j++) {
			cout << " ";
		}
		cout << i;
		for (int m = 1; m <= 2 * i - 1; m++) {
			cout << " ";
		}
		cout << i << endl;
	}
	for (int i = 0; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			cout << " ";
		}
		(i != 0) && cout << i;
		for (int m = 1; m <= 2 * i - 1; m++) {
			cout << " ";
		}
		cout << i << endl;
	}
	return 0;
} 
