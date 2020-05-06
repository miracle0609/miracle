#include <iostream>
#include <cstring> 
using namespace std;

int main() {
	string a;
	cin >> a;
	int t = 0;
	for (int i = 0; a[i]; t += a[i++] == 'A');
	cout << t << endl;
	return 0;
}
