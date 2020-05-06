#include <iostream>
#include <algorithm>
using namespace std;
#define max 1000005
int a[max];
int b[max] = {0};
bool c[max] ={false};
int main() {
	int n;
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	sort(a + 1, a + 1 + n);
	for (int i = 1, j = 1; i <= n; ) {
		if (a[i] == a[i + 1]) {
			i++;
		} else {
			c[i] = true;
			i++;
			j++;
		}
	}
	for (int i = 1; i <= n; i++) {
		if (c[i] == true) {
			for (int j = 1; j <= n; j++) {
				if (a[i] == a[j]) {
					b[i]++;
				} 
			} 
			if (b[i] & 1) {
				cout << a[i] << endl;
				return 0;
			}
		}
	}
//	for (int i = 1; i <= n; i++) {
//		if (b[i] & 1) {
//			cout << a[i] << endl;
//			break;
//		}
//	}
	return 0;
}
