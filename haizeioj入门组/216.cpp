#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	string a[n + 5];
	string b[n + 5];
	string c[n + 5];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
		for (int j = 3; j <= a[i].size(); j++) {
			b[i][j - 3] = a[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; b[i][j] != '\0'; j++) {
			c[i] += b[i][j];
		}
	}
	sort(c, c + n);
	for (int i = 0; i < n; i++) {
		cout << c[i] << endl;
	}
	return 0;	
} 
