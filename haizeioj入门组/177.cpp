#include <iostream>
#include <cstring>
using namespace std;

int main() {
	string s;
	string m;
	cin >> s;
	m = s;
	cout << s << endl;
	for (int i = 0; i < s.size() - 1; i++) {
		for (int j = s.size() - 2; j < s.size(); j++) {
			m[j] = s[j];
		} 
		m[0] = m[s.size() - 2];
		m[1] = m[s.size() - 1];
		for (int j = 0; j < s.size() - 2; j++) {
			m[j + 2] = s[j];
		} 
		s = m;
		cout << s << endl;
	} 
	return 0;
}
