#include <iostream>
using namespace std;

int main() {
	int n, a[105], x;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i]; 
	}
	cin >> x;
	int s = a[n];
	for (int i = n - 1; i >= x; i--) {
		a[i + 1] = a[i];
	}
	a[x] = s;
	for (int i = 1; i <= n; i++) {
		cout << a[i]; 
		(i != n) && cout << " ";
	}
	return 0;
}
