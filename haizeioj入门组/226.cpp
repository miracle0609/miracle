#include <iostream>
using namespace std;
typedef long long ll;
ll a, b, mod;

ll ans(ll a, ll b) {
	ll res = 1;
	while (b > 0) {
		if (b & 1) {
			res = res * a % mod;
		}
		a = a * a % mod;
		b >>= 1; 
	}
	return res;
}

int main() {
	
	ios::sync_with_stdio(false);
	cin >> a >> b >> mod;
	cout << ans(a,b) % mod; 
	return 0;
} 
