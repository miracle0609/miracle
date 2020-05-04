#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int i = 0, k = 1, n, a[20];
	cin >> n;
	while(n) {a[i] = n % 10; n /= 10; i++;}
	for(int j = 0; j < i / 2; j++)
		if (a[j] != a[i-j-1]) {k = 0; break;}
	k ? cout << "YES" << endl : cout << "NO" << endl;
	return 0;
}
