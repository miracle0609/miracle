#include <iostream>
#include <algorithm>
using namespace std;

struct stu {
	string name;
	int a, b, c, d;
	int sum;
}s[35];
int cmp(stu x, stu y) {
	return x.sum > y.sum; 
}
int main() {
	int n;
	cin >> n;
	int b[4 * n + 5];
	int p = 1;
	for (int i = 1; i <= n; i++) {
		int k = 1;
		cin >> s[i].name >> s[i].a >> s[i].b >> s[i].c >> s[i].d;
		b[p] = s[i].a;
		p++;
		b[p] = s[i].b;
		p++;
		b[p] = s[i].c;
		p++;
		b[p] = s[i].d;
		p++;
		s[i].sum = s[i].a + s[i].b + s[i].c + s[i].d;
	} 
	for (int i = 1; i <= n; i++) {
		cout << s[i].sum << endl;
	}
	sort(s + 1, s + 1 + n, cmp);
	cout << s[1].name << endl;
	sort(b + 1, b + 1 + 4 * n);
	cout << b[4 * n] << " " << b[1];
	return 0;
}
