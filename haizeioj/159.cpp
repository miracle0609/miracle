#include <iostream>
using namespace std;

int main() {
	char a;
	cin >> a;
	int n = (int) a - 64;
	int c = (int) a; 
	//cout << n;
	for (int i = 1; i <= n; i++) {
		for (int j = n - i + 1; j < n ; j++) {
			cout << " ";
		}
		for (int j = 2 * i - 1; j <= 2 * n - 1; j++) {
			if (j < i + n - 1) {
				cout << (char)c--;
			} else if (j == i + n - 1){
				c = 65;
				cout << (char)c;
			} else cout << (char)c++;
		}
		c = c - 1; 
		cout << endl;  
	}
	
	return 0;
} 
