#include <iostream>
#include <cstring> 
using namespace std;

char *str, cp[1000];
void ans(char *s, char *q, int n)  
{
	int i = 0;
	str = cp;
    for (i = 0; *s != '\0'; i++) {
       if (i == n-1) {
            while (*q != '\0') {
             str[i] = *q;
             q++;
             i++;
            }
        }
		str[i] = *s;
		s++;
    }
	str[i] = '\0';
	cout << str << endl;
}

int find(char *c) {
	int i;
	for ( i = 0; i < (int) strlen(c); i++) {
		if (c[i] == 'a') {
			break;
		}
	} 
	return i + 1;
}
int main() {
	char m[1000], k[1000];
	int n;
	cin >> m;
	cin >> n;
	cin >> k;
	char *a = m;
	char *b = k;
	int lena = (int) strlen(a);
	int lenb = (int) strlen(b);
	
	cout << lena << endl; 
	cout << find(a) << endl;
	ans(a, b, n);
	return 0;
}
