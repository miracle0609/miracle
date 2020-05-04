#include <iostream>
using namespace std;
#include <cstring>
#include <cstdlib> 
struct stu {
	string a;
	string b;
}m[1005];
int main() {
	int n;
	cin >> n;
	int t = 0, q = 0;
	double sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> m[i].a >> m[i].b;
		if (m[i].a == "C") {
			t++;
		}  else {
			q++;
			sum += atoi(m[i].b.c_str());
		}
	}
	cout << t << " " << (int) (sum / q);
	return 0;
	
} 
