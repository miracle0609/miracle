#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n + 5];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int t = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
				t++;
			}
			
		}
	}
	cout << t << endl;
	return 0;
}
