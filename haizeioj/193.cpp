#include <iostream>
using namespace std;

int main() {
	long long n, a[100005];
	long long k, s;
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	cin >> k >> s;
	long long x = s - k;
	int l = 1, r = n, m = 0;
	int mid;
	while (l <= r) {
		mid = l + r >> 1;
		if (a[mid] > x) {
			r = mid - 1;
		} else if (a[mid] < x) {
			l = mid + 1;
		} else {
			m = mid;
			break;
		}
	}
	if (m == 0) {
		cout << "No" << endl;
	} else cout << "Yes" << endl;
	
	return 0;
} 
