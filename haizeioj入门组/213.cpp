#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n + 5];
	int b[10] = {0};
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] == 100) {
			b[1]++;
		} else if (90 <= a[i] && a[i] <= 99) {
			b[2]++;
		} else if (80 <= a[i] && a[i] <= 89) {
			b[3]++;
		} else if (70 <= a[i] && a[i] <= 79) {
			b[4]++;
		} else if (60 <= a[i] && a[i] <= 69) {
			b[5]++;
		} else b[6]++; 
	} 
	sort(a + 1, a + 1 + n);
	for (int i = n; i >= 1; i--) {
		cout << a[i] << endl;
	}
	for (int i = 1; i <= 6; i++) {
		cout << b[i];
		(i != 6) && cout << " ";
	}
	return 0;
}
