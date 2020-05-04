#include <iostream>
using namespace std;

int main()
{
	char a[1005], b[1005];
	gets(a);
	gets(b);
	char *zhu = a;
	char *zi = b;
	int i = 0, j = 0, cnt = 0 ; 
	while( *(zhu + i) ) {
		int m = i;
		
		while(*(zi + j) && *(zhu + m) == *(zi + j)) {
			m++;
			j++;
		}
		if(*(zi + j) == 0) {
			cnt++;
		}
			i++;
			j = 0;
	}
	cout << cnt << endl;
	return 0;
}
