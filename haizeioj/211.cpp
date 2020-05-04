#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	string a[n + 5];
	string b[n + 5];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	} 
	for (int i = 0; i < n; i++) {
		for (int j = 0, k = a[i].size() - 1; j < a[i].size(), k >= 0; j++, k--) {
			b[i][j] = a[i][k];
		}
	} 
	sort(b , b + n);
	for (int i = 0; i < n; i++) {
		cout << b[i] << endl;
	}
	return 0;
}
