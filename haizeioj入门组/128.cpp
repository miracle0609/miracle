#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a;
	double sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		sum += a;
	}
	cout << fixed << setprecision(2) << sum / n << endl;
} 
