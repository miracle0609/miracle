#include <iostream>
using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	if (a == "O" && b == "Y") {
		cout << "MING" << endl;
	} else if (a == "Y" && b == "O") {
		cout << "LI" << endl;
	} else if (a == "Y" && b == "H") {
		cout << "MING" << endl;
	} else if (a == "H" && b == "Y") {
		cout << "LI" << endl;
	} else if (a == "O" && b == "H") {
		cout << "LI" << endl;
	} else if (a == "H" && b == "O") {
		cout << "MING" << endl;
	} else cout << "TIE" << endl;
	return 0;
}
