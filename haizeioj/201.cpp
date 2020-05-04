#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n + 5];
	int b[n + 5];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
//	for (int i = 1; i <= n; i++) {
//		cout <<  a[i] << " ";
//	}
	//int k = unique(a + 1, a + 1 + n) - a;

	int i, j;
	for (i = 1, j = 1; i <= n; ) {
		if (a[i] == a[i + 1]) {
			i++;
		} else {
			b[j] = a[i];
			i++;
			j++;
		}
	}
	cout << j - 1 << endl;
	for (int p = 1; p <= j - 1; p++) {
		cout <<  b[p];
		(p != j - 1) && cout << " ";
	}
//	cout << k - 1 << endl;
//	for (int i = 1; i <= k - 1; i++) {
//		cout << a[i];
//		(i != k - 1) && cout << " ";
//	}
	return 0;
}
