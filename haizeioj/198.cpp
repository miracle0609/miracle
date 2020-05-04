#include <iostream>
using namespace std;
#define mod 1000000007
long long fibo(long long n) {
	if (n == 1) return 1;
	if (n == 2) return 1;
	long long f1 = 1, f2 = 1;
	long long f3;
	for (long long i = 3; i <= n; i++) {
		f3 = (f1 % mod + f2 % mod) % mod;
		f1 = f2 % mod;
		f2 = f3 % mod;
	}
	return f3;
}
int main() {
	long long n;
	cin >> n;
	cout << fibo(n) << endl;
	return 0; 
} 
