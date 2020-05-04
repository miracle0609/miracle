#include <iostream>
using namespace std;

int main() {
	int n, num;
	cin >> n;
	int a[105];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	cin >> num; 
	for (int i = 1; i <= n; i++) {
		if (a[i] == num) {
			cout << i << endl;
			return 0;
		}
	}
	cout << 0 << endl;
	return 0;
}
