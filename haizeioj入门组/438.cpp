#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n;
	cin >> n;
	double sum;
	if (n <= 240) {
		sum = n * 0.4783;
	} else if (241 <= n && n <= 400) {
		sum = 240 * 0.4783 + (n - 240) * 0.5283;
	} else sum = 240 * 0.4783 + 160 * 0.5283 + (n - 240 - 160) * 0.7783;
	cout << fixed << setprecision(1) << sum << endl;
	return 0;
} 
