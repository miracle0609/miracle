#include <iostream>
using namespace std;

int main() {
	long long n, a[100005];
	long long s;
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	cin >> s;
	
	long long l = 1, r = n, m = 0;
	long long mid, x, y;
	for (int i = 1; i <= n; i++) {
		x = a[i];
		y = s - a[i];
		l = 1; r = n;
		m = 0;
		while (l < r) {
			mid = l + r >> 1;
			if (a[mid] > y) {
				r = mid - 1;
			} else if (a[mid] < y) {
				l = mid + 1;
			} else {
				m = mid;
				break;
			}
		}
		if (m != 0) {
				cout << "Yes" << endl;
				return 0;
		}
	}
	cout << "No" << endl;	
//	if (m == 0) {
//		cout << "No" << endl;
//	} else cout << "Yes" << endl;
	
	return 0;
} 
