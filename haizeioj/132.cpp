#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int n;
	cin >> n;
	long long a;
	long long sum = 1;
	for (int i = 1; i <= n; i++) {
		cin >> a;
		sum *= a;
	}
	cout <<  sum  << endl;
} 
