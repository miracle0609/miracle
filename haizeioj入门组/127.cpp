#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
	int x, n;
	cin >> x >> n;
	double a = x * (1 + 0.00417);
	for (int i = 2; i <= n; i++) {
		a = (x + a) * ( 1 + 0.00417);
	}
	cout << "$";
	cout << fixed << setprecision(2) << a << endl;
	return 0;
}
