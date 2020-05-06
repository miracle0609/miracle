#include <iostream>
#include <cstring>
using namespace std;
#define max 10000005
int prime[max];
bool isprime[max];
inline int read(){
    int x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9') {
        if (ch == '-')
            f = -1;
         ch = getchar();
     }
     while (ch >= '0' && ch <= '9') {
         x = (x << 1) + (x << 3) + (ch ^ 48);
         ch = getchar();
    }
    return x * f;
}
void Prime(int b) {
	memset(isprime,true,sizeof(isprime));
	isprime[1] = false;
    isprime[0] = false;
	for (int i = 2; i <= b; i++) {
		if (isprime[i]) prime[++prime[0]] = i;
		for (int j = 1; j <= prime[0]; j++) {
			if (i * prime[j] > b) break;
			isprime[i * prime[j]] = false;
			if (i % prime[j] == 0) break;
		}
	}
}
int main() {
	ios::sync_with_stdio(false);
	int a, b;
	a = read();
	b = read();
	Prime(b);
	for (int i = a; i <= b; i++) {
		isprime[i] && printf("%d\n",i);
	}
	return 0;
} 
