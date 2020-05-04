#include <iostream>
using namespace std;
int main()
{
    long long n, k, f = 0;
    cin >> n >> k;
    for (long long i = 1; i <= n; i++)
    	f = (f + k) % i;
    cout << f + 1 << endl;
}

