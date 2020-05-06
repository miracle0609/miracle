#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int c = 65;
	for (int i = 1; i <= n; i++) {
		for(int k = 1; k <= n - i; k++) {
				cout << " ";
		}  
		for (int j = 1; j <= 2 * i - 1; j++) {
			cout << char (c);
		}
		c += 1;
		cout << endl;
	}
	int d = c - 2;
	for (int i = n - 1; i >= 1; i--) {
		for(int k = n - i; k >= 1; k--) {
				cout << " ";
		}  
		for (int j = 2 * i - 1; j >= 1; j--) {
			cout << char (d);
		}
		d -= 1;
		cout << endl;
	}
}
