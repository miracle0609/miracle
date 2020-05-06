#include <iostream>
#include <algorithm>
using namespace std;

struct stu {
	int id;
	int c;
	int num;
};
int cmp(stu x, stu y) {
	return x.c < y.c;
}
int cmp1(stu x, stu y) {
	return x.id < y.id;
}
int main() {
	int n, m;
	cin >> n >> m;
	struct stu a[n + 5];
	int b[n + 5];
	for (int i = 1; i <= n; i++) {
		a[i].id = i;
		a[i].num = 0;
		cin >> a[i].c;
	}
	sort(a + 1, a + 1 + n, cmp);
	for (int i = 1; i <= m; i++) {
		cin >> b[i];
	}
	sort(b + 1, b + 1 + n);
	int i = 1;
	int j = 1;
	while(i <= n && j <= m)
    {
        if(a[i].c >= b[j])
        {
            a[i].num++;
            j++;
        } else i++;
    }
	sort(a + 1, a + 1 + n, cmp1);
	for (int i = 1; i <= n; i++) {
		cout << a[i].num << endl;
	}
	return 0;
}
