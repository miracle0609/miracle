#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	double a, b;
	cin >> a >> b;
	cout << fixed << setprecision(2) << 3.14 * a * a - 3.14 * b * b << endl;
	return 0;
}
