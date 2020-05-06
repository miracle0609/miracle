#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
    string a;
    cin >> a;
    for(int i = 0; i < a.size(); i++) {
    	if ('A' <= a[i] && a[i] <= 'Z')
            a[i] |= 0x20;
        else if ('a' <= a[i] && a[i] <= 'z')
            a[i] &= ~0x20;
	}
    cout << a;
    return 0;
}
