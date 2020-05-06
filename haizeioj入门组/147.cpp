//#include <iostream>
//#include <cstring>
//using namespace std;
//int main() {
//	ios::sync_with_stdio(false);
//	char a[10005];
//	cin >> a;
//	int n = strlen(a);
//	if (a[n - 1] & 1) {
//		cout << "NO" << endl; 
//	} else cout << "YES" << endl;
//	return 0;
//}

#include<iostream>
#include<string>
using namespace std;
 
int main() {
    string a;
    cin >> a;
    if ((a[a.size() - 1] - '0') & 1) {
        cout << "NO";
    } else
         cout << "YES";
    return 0;
}

