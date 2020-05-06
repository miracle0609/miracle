#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = (n - i + 1); j >= 1; j--) {
			cout << j;
			(j != 1) && cout << " ";
		}
		cout << endl; 
	}
	return 0;
}
