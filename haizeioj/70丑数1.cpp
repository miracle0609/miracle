#include <iostream>
#include <cstdio>
using namespace std;

bool is_prime[1005];
int prime[1005], cnt = 0, n;

bool judge(int x);

int main() {
	for (int i = 2; i <= 1003; i++) {
		if (!is_prime[i]) { prime[cnt++] = i; }
		for (int j = 0; j < cnt && i * prime[j] <= 1003; j++) {
			is_prime[i * prime[j]] = 1;
			if (i % prime[j] == 0) { break; }
		}
	}
	while (cin >> n) {
		cout << 1 << endl;
		for (int i = 2; i <= n; i++) {
		    if(judge(i)) {
			    (!(i % 2) || !(i % 3) || !(i % 5)) && printf("%d\n", i);
		    }
		}
	}
	return 0;
} 

bool judge(int x) {
	for (int i = 3; i < cnt && prime[i] <= x; i++) {
		if (x % prime[i] == 0) { return 0; }
	}
	return 1;
}1 
