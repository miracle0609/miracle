#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	int a[n + 5];
	int b[n + 5];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
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
//	for (int p = 1; p <= j - 1; p++) {
//		cout <<  b[p] << " ";
//	}
	//unique(a + 1, a + 1 + n);
	if (k <= n) {
		cout << b[k] << endl;
	} else cout << "NO RESULT" << endl;
	return 0;
} 
