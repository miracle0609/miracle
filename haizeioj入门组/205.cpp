#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int a[40][40];
	double sum[40];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
			sum[i] += a[i][j];
		}
	}
	for (int j = 1; j <= n; j++) {
		cout << fixed << setprecision(6) << sum[j] / m << endl;
	}
	return 0;
} 
