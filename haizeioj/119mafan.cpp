#include <iostream>
using namespace std;

int main() {
	int y, m, d;
	cin >> y >> m >> d;
	
	if (m == 2 && d == 29) {
		cout << y << " " << m << " " <<  d - 1 << endl;
		cout << y << " " <<  3 << " " <<  1 << endl;
	}
	else if (m == 2 && d == 28) {
		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
			cout << y << " " << 2 << " " <<  27 << endl;
			cout << y << " " << 2 << " " <<  29 << endl;
		} else{
			cout << y << " " << 2 << " " <<  27 << endl;
			cout << y << " " << 3 << " " <<  1 << endl;
		}
	}
	else if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10) && d == 31)
	{
		cout << y << " " <<  m << " " <<  30 << endl;
		cout << y << " " <<  m + 1 << " " <<  1 << endl; 	
	 } 
	else if (m == 12 && d == 31)
	{
		cout << y << " " <<  m << " " <<  30 << endl;
		cout << y + 1 << " " <<  1 << " " <<  1 << endl; 	
	}
	else if (m == 1 && d == 1)
	{
		cout << y - 1 << " " <<  12 << " " <<  31 << endl;
		cout << y << " " <<  1 << " " <<  2 << endl; 	
	}
	else if (m == 3 && d == 1)
	{
		if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
			cout << y << " " <<  2 << " " <<  29 << endl;
			cout << y << " " <<  3 << " " <<  2 << endl;
		} else {
			cout << y << " " <<  2 << " " <<  28 << endl;
			cout << y << " " <<  3 << " " <<  2 << endl;
		}
	}
	else if (m == 8 && d == 1)
	{
		cout << y << " " <<  7 << " " <<  31 << endl;
		cout << y << " " <<  8 << " " <<  2 << endl; 	
	}
	else if ((m == 5 || m == 7 || m == 10) && d == 1)
	{
		cout << y << " " <<  m - 1 << " " <<  30 << endl;
		cout << y << " " << m << " " <<  2 << endl; 	
    } 
	else if ((m == 4 || m == 6 || m == 9 || m == 11) && d == 30)
	{
		cout << y << " " <<  m << " " <<  29 << endl;
		cout << y << " " <<  m + 1 << " " <<  1 << endl; 	
	}      
	else if ((m == 4 || m == 6 || m == 9 || m == 11) && d == 1)
	{
		cout << y << " " <<  m - 1 << " " <<  31 << endl;
		cout << y << " " <<  m  << " " <<  2 << endl; 	
	}  
	else {
		  cout << y << " " <<  m  << " " <<  d - 1 << endl;
		  cout << y << " " <<  m  << " " <<  d + 1 << endl; 	
	}
	return 0;
}
