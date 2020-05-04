#include <iostream>
using namespace std;
int f[55];
int ans() {
	for (int i = 2; i <= 4; i++) {
		f[i] = 1;
	}
	for (int i = 5; i <= 50; i++) {
		f[i] = f[i - 2] + f[i - 3];
	}
	return 0;
}
int  main() {
	int n;
	cin >> n;
	ans();
	cout << f[n] << endl;
	return 0;
}
