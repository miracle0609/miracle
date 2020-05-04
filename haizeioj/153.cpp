#include <iostream>
using namespace std;

int main() {
	int y, m, d;
	cin >> y >> m >> d;
	if (m == 1) {
		m = 13;
		y -= 1;
	}
	if (m == 2) {
		m = 14;
		y -= 1; 
	}
	int h = (d + 26 * (m + 1) / 10 + (y % 100)+ (y % 100) / 4 + (y / 100) / 4 + 5 * (y / 100)) % 7;
	switch(h){
            case 0: cout << 6 << endl; break;
            case 1: cout << 7 << endl; break;
            default: break;
    }
    if (h >= 2) cout << h  - 1 << endl;
	return 0;
} 
