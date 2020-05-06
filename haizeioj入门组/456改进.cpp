#include <iostream>
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	int n, n1, t;
	cin >> n; 
	cin >> n1; 
	for(int i = 2; i <= n; i++) {
		cin >> t;
		n1 ^= t;
	}
	cout << n1 << endl;
	return 0;
}

