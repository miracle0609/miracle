#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int a[100] = {4,7,44,47,74,77,444,447,474,477,744,747,774,774,777};
	
	for (int i = 0; i < 15; i++) {
		if (n % a[i] == 0) {
			cout << "YES" << endl;
			return 0;
		} 
	}
	cout << "NO" << endl;
	return 0;
}
