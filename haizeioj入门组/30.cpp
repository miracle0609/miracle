#include <iostream>
using namespace std;
const long long mod =  1e9+7;
typedef long long ll;

//% mod
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
	//scanf("%ll%ll", &n, &m);
	ll n, m, sum;
	ios::sync_with_stdio(false);
	cin >> n >> m;
	m = m % mod;
	//cout << ans(n, m) << endl;
		
	if (n == 1) {
		sum = 0;
	}  else {
		//(m^n£©-(m)¡Á(m-1)¡Á(m-2)^(n-2) 
		sum = (ans(m, n) - m * (m - 1) % mod * ans((m - 2 + mod) % mod, n - 2) % mod + mod) % mod;
	}
	cout << sum;
	return 0;
} 
