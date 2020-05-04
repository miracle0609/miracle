#include <iostream>
#include <cstring>
#include <cmath> 
using namespace std;

bool is_prime(int number) { 
    for (int j = 2; j <= sqrt(number); j++) 
        if (number / j * j == number) 
            return false;
    return true;
}

int ans(int n) {
    return (n == (int)sqrt(n) * (int)sqrt(n))? 1 : 0;
}

int main() {
	
	int a, b;
	int m[10000];
	int j = 0;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		int k = (i / 1000) * 10 + (i / 100 % 10);
		if ( (i % 6 == 0) && is_prime(k) &&  ans(i % 100) ){
			 m[j++] = i; 
		} 
	} 
	for (int i = 0; i < j; i++) {
		cout << m[i];
		(i != j - 1) && cout << " ";
	}
	cout << endl;
	cout << j;
} 
