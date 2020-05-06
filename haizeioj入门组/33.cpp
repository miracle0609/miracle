#include <iostream>
using namespace std;

int main() {
	double m, n;
	int p;
	double ans;
	cin >> m >> n >> p;
	if (p == 1) {
		ans = (m + n) * 1.087 / 2;
		printf("%.2lf", ans);
	} else {
		ans = (m * 0.973 + n) / 2;
		printf("%.2lf", ans);
	}
	return 0;
} 
