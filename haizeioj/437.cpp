#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int c = a * 10 + b;
	cout << floor(c / 26) << endl;
	return 0;
}
