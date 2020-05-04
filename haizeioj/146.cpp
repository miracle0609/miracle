#include <iostream>
#include <cstring> 
using namespace std;

int main() {
	char a[55];
	cin >> a;
	for (int i = 0; i < strlen(a); i++) {
		if (a[i] >= 'a' && a[i] <= 'z') {
			if(a[i] == 'z') {
				a[i] = 'a';
			} else a[i] = char((int) a[i] + 1);
		} else if (a[i] >= 'A' && a[i] <= 'Z') {
			if(a[i] == 'Z') {
				a[i] = 'A';
			} else a[i] = char((int) a[i] + 1);
		}
	}
	for (int i = 0; i < strlen(a); i++) {
		cout << a[i];
	}
	return 0;
}
