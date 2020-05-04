#include <iostream>
using namespace std;

int main() {
	int a, b;
	int t =0;
	ios::sync_with_stdio(false);
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		!(i % 2 == 0 && i % 5 ==0) && (t++);
	}
	cout << t << endl;
	return 0;
}
