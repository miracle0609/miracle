#include <iostream>
#include <cstring>
using namespace std;
typedef struct stu {
	char a;
	int m;
};
int main() {
	int n;
	stu k[100];
	char code[100];
	char cp[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> k[i].a >> k[i].m;
	}
	cin >> code;
	int sum = 0;
	int j = 0;
	for (int i = 0; i < strlen(code); i++) {
		if ( 'A' <= code[i] && code[i] <= 'Z') {
			cp[j++] = code[i];
		}
	} 
	for (int i = 0; i < strlen(cp); i++) {
		for (int j = 0; j < n; j++) {
			if (cp[i] == k[j].a) {
			    sum += k[j].m;
			}
		}	
	}
	cout << sum << endl;
	return 0;
}
