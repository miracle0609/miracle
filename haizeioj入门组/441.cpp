#include <iostream>
using namespace std;

int main()
{
    unsigned long long n, sum = 0;
    int x;
    cin >> x >> n; 
    for(int i = 0; i < n; i++)
    {
        if((x != 6) && (x != 7)) {
        	 sum += 2; 
		}
        if(x == 7) {
        	x = 1; 
		} else  x++; 
    }
    cout << sum << endl; 
    return 0;
}
