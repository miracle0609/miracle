#include <iostream>
using namespace std;

int main() {
	int y, m, d;
	cin >> y >> m >> d;
	if (m > 0 && d > 0) {
		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
			if (m == 2 && d <= 29) cout << "Yes" << endl;
			else if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12 ) && d <= 31)
			     cout << "Yes" << endl;
			else if ((m == 4 || m == 6 || m == 9 || m == 11) && d <= 30)
			     cout << "Yes" << endl;
			else cout << "No" << endl;
		} else {
			if (m == 2 && d <= 28) cout << "Yes" << endl;
			else if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12 ) && d <= 31)
			     cout << "Yes" << endl;
			else if ((m == 4 || m == 6 || m == 9 || m == 11) && d <= 30)
			     cout << "Yes" << endl;
			else cout << "No" << endl;
		}
	} else {
		cout << "No" << endl;
	}
	return 0;
}
