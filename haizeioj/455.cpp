#include <iostream>
using namespace std;
int gcd(int a, int b) {
	return (a % b == 0) ? b : gcd(b, a % b);
}
int min(int a, int b) {
	return (a < b) ? a : b;
}
int max(int a, int b) {
	return (a > b) ? a : b;
}
int main() {
	int a, b, c;
	ios::sync_with_stdio(false);
	cin >> a >> b >> c;
	int d = min(min(a, b), c);
	int e = max(max(a, b), c);
//	cout << d << " " << e << endl;
//	cout << gcd(d, e) << endl;
	int f = gcd(d, e);
	cout << d / f << "/" << e / f << endl;
	return 0; 
}
