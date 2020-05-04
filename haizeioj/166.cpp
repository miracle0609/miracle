#include <iostream>
#include <cstring> 
using namespace std;

string ans(string a, string b, int n) {
	string m;
	string k;
	for (int i = 0; i < a.size(); i++) {
		if (i == n - 1) {
			for (int j = 0; j <= n - 1; j++) {
			     m[j] = a[j];
			}
			for (int j = n - 1; j < a.size(); j++) {
			     k[j] = a[j];
			}
			break;
		}
	}
	cout << m;
	cout << k;
	m += b;
	return m;
}

int find(string c) {
	int i, j;
	for ( i = c.size(), j = 0; i > 0, j < c.size(); i--, j++) {
		if (c[i] == 'x') {
			break;
		}
	} 
	return j;
}
int main() {
	string a, b;
	int n;
	cin >> a;
	cin >> n;
	cin >> b;
	int lena = a.size();
	int lenb = b.size();
	if (lena > 100) {
		cout << 100 << endl;
	} else cout << lena<< endl; 
	cout << ans(a, b, n) << endl;
	//string c = ans(a, b, n);
	//cout << find(c) << endl;
	return 0;
}
