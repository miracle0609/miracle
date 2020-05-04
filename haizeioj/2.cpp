#include <iostream>
using namespace std;

int  main() {
	int grade;
	cin >> grade;
	if (0 <= grade && grade < 60 ) {
		cout << "D";
	} else if (60 <= grade && grade < 75) {
		cout << "C";
	} else if (75 <= grade && grade < 85) {
		cout << "B";
	} else cout << "A";
	
	return 0;
}
