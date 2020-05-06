#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n + 5][n + 5];
	for (int i = 1; i <= n; i++) {
		a[i][1] = 1;
		for (int j = 1; j <= i; j++) {
			a[j][i] = 1;
			a[i + 1][j] = a[i][j] + a[i][j - 1];
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			cout << a[i][j];
			(j != i) && cout << " ";
		}
		cout << endl;
	}
	return 0;
}
