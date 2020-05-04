#include <iostream>
#include <algorithm>
using namespace std;

typedef struct stu {
	string name;
	int score;
};
int cmp(stu a, stu b) {
	return a.score > b.score;
}
int main() {
	int n;
	cin >> n;
	int a[n + 5][n + 5];
	stu c[n + 10];
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum = 0; 
		cin >> c[i].name;
		for (int j = 1; j <= 4; j++) {
			cin >> a[i][j];
			sum += a[i][j];
		}
		c[i].score = sum;
	}
	sort(c + 1, c + 1 + n, cmp);
	for (int i = 1; i <= 3; i++) {
		cout << c[i].name << endl;
	}
	return 0;
}
