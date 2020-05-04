#include <iostream>
#include <algorithm>
using namespace std;
struct stu {
 	int id;
 	int h;
}a[1005]; 

int cmp(stu x, stu y) {
	return x.h < y.h;
}
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].h;
		a[i].id = i;
	}
	stable_sort(a + 1, a + 1 + n, cmp);
	for (int i = 1; i <= n; i++) {
		cout <<  a[i].id;
		(i != n) && cout << " ";
	}
	return 0;
}
