#include <iostream>
using namespace std;

int fibo(int n) {
	if (n == 1) return 1;
	if (n == 2) return 1;
	int f1 = 1, f2 = 1;
	int f3;
	for (int i = 3; i <= n; i++) {
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	return f3;
}
int main() {
	int n;
	cin >> n;
	cout << fibo(n) << endl;
	return 0; 
} 
