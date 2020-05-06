#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n + 5];
	string b[] ={"You", "Liang", "Zhong", "Cha"};
	int c[4] = {0};
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (90 <= a[i] && a[i] <= 100) {
			c[0]++;
		} else if (80 <= a[i] && a[i] <= 89) {
			c[1]++;
		} else if (60 <= a[i] && a[i] <= 79) {
			c[2]++;
		} else c[3]++;
	}
	for (int i = 0; i < 4; i++) {
		cout << b[i] << " " << c[i] << endl;
	}
	return 0;
}
