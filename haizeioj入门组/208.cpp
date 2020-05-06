#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int m, n;
	cin >> m;
	int a[m + 5];
	for (int i = 1; i <= m; i++) {
		cin >> a[i]; 
	}
	cin >> n;
	sort(a + 1, a + m + 1, greater<int>());
//	for (int i = 1; i <= m; i++) {
//	cout <<  a[i] << " "; 
//	}
	int b = 1;
	int s = 1;
	for (int i = 1; i <= m - 1; i++) {
		if (a[i] == a[i + 1]) {
			s++;
		} else {
			b = s;
			if (b >= n) {
				cout << b << endl;
				return 0;
			}
			s = 1;
		}
		
	}
	return 0;
} 
