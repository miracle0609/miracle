#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;
	int a[m + 5][n + 5];
	int b[n + 5];
	int c[n * m + 5];
	int k = 1;
	int p = 1;
	double sum = 0;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
			c[p++] = a[i][j];
			sum += a[i][j];
		}
	}
	sort(c + 1, c + 1 + n * m, greater<int>());
	for (int i = 1; i <= n; i++) {
		b[k] = 0;
		for (int j = 1; j <= m; j++) {
			if (b[k] < a[j][i]) {
				b[k] = a[j][i];
			}
		}
		k++;
	}
	for (int i = 1; i <= n; i++) {
		cout << b[i] << endl;
	}
	int h = sum / (n * m) + 0.5;
	int q = 0;
	for (int i = 1; i <= n * m; i++) {
		if (c[i] >= h) {
			q++;
		}
		cout << c[i];
		(i != n * m) && cout << " ";
	}
	cout << endl;
	cout << h << endl;
	cout << q << endl;
	return 0;
}
