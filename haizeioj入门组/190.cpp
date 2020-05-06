#include <iostream>
#include <cstring>
using namespace std;
#define max 8000005
int prime[max];
bool isprime[max];
void ans(int n) {
	memset(isprime, true, sizeof(isprime));
	isprime[0] = false;
	isprime[0] = false;
	for (int i = 2; i <= n; i++) {
		if (isprime[i]) prime[++prime[0]] = i;
		for (int j = 1; j <= prime[0] && i * prime[j] <= n; j++) {
			isprime[i * prime[j]] = false;
			if (i % prime[j] == 0) break;
		} 
	}
}

int main() {
	int n, p, q, l, r, mid, m = 0, t = 0;
	cin >> n;
	ans(n);
	for (int i = 1; i <= prime[0]; i++) {
		//cout << prime[i] << endl;
		p = prime[i];
		q = n - p;
		if (p <= q) {
			l = 1; r = prime[0];
			m = 0;
			while (l <= r) {
				mid = l + r >> 1;
				if (prime[mid] > q) {
					r = mid - 1;
				} else if (prime[mid] < q) {
					l = mid + 1;
				} else {
					m = mid;
					break;
				}
			}
			if (m != 0) {
				t++;
			}
		}
	}
	cout << t << endl;
	return 0;
}
