#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n + 5], b[n + 5];
	double c[n + 5];
	a[1] = 4;
	a[2] = 7;
	b[1] = 7;
	b[2] = 11;
	double sum = 0;
	for (int i = 3; i <= n; i++) {
		a[i] = a[i - 1] + a[i - 2]; 
		b[i] = b[i - 1] + b[i - 2];
	} 
	for (int i = 1; i <= n; i++) {
		c[i] = a[i] / (b[i] * 1.0); 
		sum += c[i];
	}
	cout << a[n] << "/" << b[n] << endl;
	cout << fixed << setprecision(2) << sum << endl;
	return 0;
} 
