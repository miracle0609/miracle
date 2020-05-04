#include <iostream>
using namespace std;

int main() {
	int begin, n, t;
	cin >> begin >> n;
	if (begin < 0) begin = 0;
	if (begin & 1) {
		begin += 1;
		for (int i = 1; i <= n; i++) {
			cout << begin << endl;
			begin += 2;
		}
	} else {
		for (int i = 1; i <= n; i++) {
				cout << begin << endl;
				begin += 2;
		}
	}
	return 0;
} 
