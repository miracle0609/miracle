#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	double a[40][40];
	double sum[40] = {0};
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			sum[i] += a[j][i];
		}
	}

	for (int j = 1; j <= m; j++) {
		cout << sum[j]  << endl;
	}
	return 0;
} 
