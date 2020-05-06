#include <iostream>
#include <algorithm>
#include <iostream>
using namespace std;
string Replace(string s)
{
    string res = "";
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ') {
            res += "%20";
        } else{
            res += s[i];
        }
    }
    return res;
}
 
int main() {
	string a; 
	getline(cin,a);
	a = Replace(a);
	cout << a << endl;
	return 0;
} 
