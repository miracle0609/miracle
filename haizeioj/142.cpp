#include <iostream>
#include <cstring>
using namespace std;
#define max 100000
int prime[max];
bool is_prime[max];

void Prime() {
	memset(is_prime, true, sizeof(is_prime));
	is_prime[0] = false;
	is_prime[1] = false;
	for (int i = 2; i <= max; i++) {
		if (is_prime[i]) prime[++prime[0]] = i;
		for (int j = 1; j <= prime[0]; j++) {
			if(i * prime[j] > max) break;
			is_prime[i * prime[j]] = false;
			if (i % prime[j] == 0) break; 
		}
	}
}
int hui(int x) {
	int m = x;
	int y = 0;
	while(m > 0) {
		y = y * 10 + m % 10;
		m /= 10;
	}
	return (y == x)? 1 : 0;
} 
int main() {
	Prime();
	int a, b;
	int m[10000];
	int j = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		is_prime[i] && hui(i) && (m[j++] = i); 
	} 
	for (int i = 0; i < j; i++) {
		cout << m[i];
		(i != j - 1) && cout << " ";
	}
} 
