#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int c = 65;
	for (int i = 1; i <= n; i++) {
		for (int j = 2 * i - 1; j <= n; j++) {
			cout << (char) c;
			c += 1;
		}
		c -= 1;
		for (int j = 2 * i - 1; j < n; j++) {
			c -= 1;
			cout << (char) c;
		}  
		c += 1;
		cout << endl;  
	}
	
	
	
	return 0;
} 
