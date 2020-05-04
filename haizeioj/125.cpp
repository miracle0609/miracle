#include <iostream>
#include <iomanip> 
using namespace std;
int main() {
	int h, m, s, t;
	cin >> h >> m >> s >> t;
	int a = t / 3600;
	int b = (t - a * 3600) / 60;
	int c = t - a * 3600 - b * 60;
	if ((s + c) > 60) { 
		b = b + (s + c) / 60;
	}
	if ((m + b) > 60) {
		a = a + (m + b) / 60;
	}
	
	if ((h + a) % 24 > 12) {
		cout << (h + a) % 24 - 12 << ":" << (m + b) % 60 << ":" << (s + c) % 60 << "pm";
	} else if ((h + a) % 24 == 12) {
		cout << (h + a) % 24 << ":" << (m + b) % 60 << ":" << (s + c) % 60 << "pm";
	} else if ((h + a) % 24 == 0) {
		cout << 12 << ":" << (m + b) % 60 << ":" << (s + c) % 60 << "am";
	}else if ((h + a) % 24 < 12) {
		cout << (h + a) % 24 << ":" << (m + b) % 60 << ":" << (s + c) % 60 << "am";
	} else if ((h + a) % 24 == 24) {
		cout << 0 << ":" << (m + b) % 60 << ":" << (s + c) % 60 << "am";
	}
	cout << endl;
	printf("%.2f%%", t / (24.0 * 3600) * 100);
	
	return 0;
} 
