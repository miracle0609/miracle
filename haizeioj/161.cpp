#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int x, n;
	cin >> x >> n;
	double m = x;
	for (int i = 1; i <= n; i++) {
		m = m * 1.0 * ( 1 + 0.06);
	}
	cout << fixed << setprecision(6) << m << endl;
	return 0;
}
