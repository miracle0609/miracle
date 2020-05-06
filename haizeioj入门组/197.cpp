#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	
	int a[15];
	for (int i = 1; i <= 10; i++) {
		cin >> a[i];
	} 
	stable_sort(a + 1, a + 11, greater<int>());
	for (int i = 1; i <= 10; i++) {
		cout << a[i];
		(i != 10) && cout << " ";
	} 
	return 0;
}
