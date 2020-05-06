#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[1005];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	//sort(a + 1, a + 1 + n);
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}
	cout << a[1] << endl;
	return 0;
} 
