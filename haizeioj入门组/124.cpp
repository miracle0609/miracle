#include <iostream>
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if ( (a >= 1 || b <= 50) && (c <= 25 || d >= 5)) {
		cout << "ok" << endl;
	} else cout << "pass" << endl;
	return 0;
}
