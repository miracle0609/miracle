#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int sum = 1;
	int t = 0;
	int a[n + 5];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	while (sum <= n) {
		sum += a[sum];
		t++;
	} 
	cout << t << endl;
	return 0;
}
