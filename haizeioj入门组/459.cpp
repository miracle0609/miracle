#include <iostream>
using namespace std;

struct stu {
	string name;
	char a;
	int  b;
	double c;
}m;
int main() {
	cin >> m.name >> m.a >> m.b >> m.c;
	cout << m.name << " " << m.a << " " << m.b << " ";
	printf("%.1f", m.c);
	return 0;
}
