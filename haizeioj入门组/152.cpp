#include <iostream>
using namespace std;

int main()
{
	int q;
	int n;
	cin >> n;
	q = (n % 7 + 3) % 7;
	switch (q)
	{
    	case 1:
    		cout << "Monday"; break;
    	case 2:
    		cout << "Tuesday"; break;
    	case 3:
    		cout << "Wednesday"; break;
    	case 4:
   		 	cout << "Thursday"; break;
   		case 5:
    		cout << "Friday"; break;
    	case 6:
   	 		cout << "Saturday"; break;
    	case 0:
    		cout << "Sunday"; break;
    	default: break;
	}
	return 0;
}
