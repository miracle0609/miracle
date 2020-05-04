#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
#define max 8000005
int prime[max];
bool isprime[max];
int a[max];
struct stu {
	int id;
	int p;
}b[max];
int cmp(stu x, stu y) {
	return x.p < y.p;
}
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
	int  l, r, mid, m = 0, t = 0;
	cin >> l >> r;
	ans(r);
	int j = 1;
	for (int i = l; i <= r; i++) {
		(isprime[i] == true) && (a[j++] = i);
	}
	//cout << j - 1 << endl;
	for (int k = 1; k <= j - 1; k++) {
		b[k].id = k;
		b[k].p = a[k + 1] - a[k];
	}
	stable_sort(b + 1, b + j - 1, cmp);
	
	int minl = a[b[1].id], minr = a[b[1].id + 1], maxl = a[b[j - 2].id], maxr = a[b[j - 2].id + 1];
	if (maxr - maxl == minr - minl)   {
		maxl = minl; maxr = minr;
	}
	if (j - 1 == 0 || j - 1 == 1) {
		cout << "There are no adjacent primes." << endl;
	} else	cout << minl << "," << minr << " are closest, " << maxl << "," << maxr << " are most distant." << endl;
	
	return 0;
}
