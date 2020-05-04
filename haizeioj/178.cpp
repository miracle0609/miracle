#include <iostream>
#include <string>
using namespace std;
int main() {
	string s = "A", s1;
	int n;
	cin >> n;
	for(int i = 2; i <= n; ++i) {
		s1 = s;
		s += 'A' + i - 1;
		s += s1;
	}
	cout << s;
	return 0;
}
