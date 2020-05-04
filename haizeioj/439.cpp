#include <iostream>
using namespace std;

int main() {
	double n;
	cin >> n;
	int t = 0;
	double s = 2.0;
	while (n > 0) {
		n -= s;
		s *= 0.98;
		t++;
	}
	cout << t << endl;
	return 0;
}
