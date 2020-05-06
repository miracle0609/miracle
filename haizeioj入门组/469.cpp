#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

long t1 = 0;
int n, t;
char a[100005];

int main() {
	ios::sync_with_stdio(false);
	cin >> n;
	cin >> a;
	if (n == 10) {
		cout << a << endl;
		return 0;
	} 
	for (int i = 0; i < strlen(a); i++) {
		if (a[i] >= '0' && a[i] <= '9')
			t = a[i] - '0';
		else if (n >= 11 && (a[i] >= 'A' + n - 10))
			t = a[i] - 'A' + 10;
		t1 = t1 * n + t;
	}
	printf("%ld\n",t1);
}

