#include <iostream> 
#include <algorithm>
using namespace std;

int  main() {
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	int a[n + 5];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n);
	cout << a[n - 1] << endl;
	return 0;
} 
