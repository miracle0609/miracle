#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n + 5];
	a[1] = 3;
	int sum = a[1];
	for (int i = 2; i <= n; i++) {
		a[i] = a[i - 1] + 2 * (i - 1); 
		sum += a[i];
	}
	for (int i = 1; i <= n; i++) {
		cout << a[i] << endl; 
	}
	cout << sum << endl;
} 
