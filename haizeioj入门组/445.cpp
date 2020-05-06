#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[1005];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int p = 0, q = 0;
	int t = 0;
	for (int i = 1; i <= n; i++) {
		p = 0;  q = 0;
		for (int j = 1; j < i; j++) {
			if (a[j] > a[i]) p++;
		}
		for (int j = i + 1; j <= n; j++) {
			if (a[j] > a[i]) q++;
		}
		if (p == q) t++; 
	}
	cout << t << endl;
	return 0;
}
