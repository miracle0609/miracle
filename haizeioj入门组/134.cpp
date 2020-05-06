#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int c[1005];
	int j = 0;
	for (int i = a; i <= b; i++) {
		if (i % 11 == 0) {
			c[j++] = i;	
		} 
	} 
	for (int i = 0; i < j; i++) {
		cout << c[i];
		i != j - 1 && cout << " ";
	} 
} 
