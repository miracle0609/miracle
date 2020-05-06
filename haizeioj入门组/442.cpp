#include <iostream>
using namespace std;
int ans(int n) {
	if (n <= 3) return n;
	if (n > 3) return ans(n - 1) + ans(n - 2);
}
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << ans(i);
		(i != n) && cout << " ";
	}
	return 0;
} 
