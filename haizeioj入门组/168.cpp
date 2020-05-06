#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
typedef struct stu {
	string name;
};
stu a[105];
int fun(stu a, stu b) {
	return a.name < b.name;
}
int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i].name;
		a[i].name[0] &= ~0x20;
		for (int j = 1; j < a[i].name.size(); j++) {
		 	a[i].name[j] |= 0x20;
		 }
	}
	sort(a, a + n, fun);
	for (int i = 0; i < n; i++) {
		cout <<  a[i].name << endl;
	}
	return 0;
} 
