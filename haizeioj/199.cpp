#include <iostream>
using namespace std;
int a[11] = {0};
int f[100005];
int ans(int x, int a[], int m) {
	for (int i = 0; i < 10; i++) {
			f[i] = i;
		}
	if (x < 10) {
		return x;
	} 
	for (long long j = 10; j <= 100000; j++) {
		f[j] = a[1] * f[j - 1] + a[2] * f[j - 2] + a[3] * f[j - 3] + a[4] * f[j - 4] + a[5] * f[j - 5] + a[6] * f[j - 6] + a[7] * f[j -7] + a[8] * f[j - 8] + a[9] * f[j - 9] + a[10] * f[j - 10];
		f[j] %= m;
	}
		return f[x];
}
int main() {
	int k, m;
	cin >> k >> m;
	for (int i = 1; i <= 10; i++) {
		cin >> a[i];
	}
	cout << ans(k,a,m) % m << endl;
	
	return 0;
} 
