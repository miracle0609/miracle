#include <iostream>
using namespace std;

int main() {
	string a, b, c, d;
	cin >> a >> b;
	cin >> c >> d;
	if ((a == "Y" && c == "H") || (a == "O" && c == "Y") || (a == "H" && c == "O")) {
		if ((a == "Y" && (d == "H" || d == "Y" )) || (a == "O" && (d == "Y" || d == "O" )) || (a == "H" && (d == "O" || d == "H" ))) {
			cout << "MING" << endl;
			return 0;
		} else {
			if ((b == "Y" && d == "H") || (b == "O" && d == "Y") || (b == "H" && d == "O")) {
				cout << "MING" << endl;
				return 0;
			} else cout << "LIHUA" << endl;
		}
	} else if ((a == "Y" && c == "Y") || (a == "O" && c == "O") || (a == "H" && c == "H")) {
		if ((b == "Y" && d == "H") || (b == "O" && d == "Y") || (b == "H" && d == "O")) {
				cout << "MING" << endl;
				return 0;
		} else if ((b == "Y" && d == "Y") || (b == "O" && d == "O") || (b == "H" && d == "H")) {
				cout << "TIE" << endl;
				return 0;
		} else cout << "LIHUA" << endl;
	} else if ((c == "Y" && a == "H") || (c == "O" && a == "Y") || (c == "H" && a == "O")) {
			if ((c == "Y" && (b == "H" || b == "Y" )) || (c == "O" && (b == "Y" || b == "O" )) || (c == "H" && (b == "O" || b == "H" ))) {
				cout << "LIHUA" << endl;
				return 0;
			} else {
				if ((b == "Y" && (d == "H" || d == "Y" )) || (b == "O" && (d == "Y" || d == "O" )) || (b == "H" && (d == "O" || d == "H" ))) {
					cout << "MING" << endl;
					return 0;
				} else {
					cout << "LIHUA" << endl;
				}
			}
	}
	return 0;
} 
