#include <iostream>
using namespace std;
#include <cstring>
#include <cstdlib> 
struct stu {
	string a;
	string b;
}m[10005];
int main() {
	int n;
	cin >> n;
	int  male = 0, female = 0, q = 0;
	long double sum = 0;
	char p[10005];
	for (int i = 1; i <= n; i++) {
		cin >> m[i].a >> m[i].b;
		if (m[i].a == "i") {
			p[i] = m[i].b[m[i].b.size() - 2];
		}
		
	}
	
	for (int i = 1; i <= n; i++) {
		if (m[i].a == "i") {
			if ((p[i] - '0') & 1) {
				male++;
				//cout << "male: " << m[i].b << endl;
			} else {
				//cout << "female: " << m[i].b << endl;
				female++;
			}
		}  else {
			q++;
			sum += atoi(m[i].b.c_str());
		}
	}
	cout << male << " " << female << " ";
	long long h = (int) (sum / q);
	if ( h < 0) {
		cout << 0;
	} else cout << h;
	return 0;
	
} 
