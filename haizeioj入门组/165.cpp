#include <iostream>
using namespace std;
long long a[10000005];
int main(){
	int c, sum = 0;
	cin >> c;
	for(int i = 1; i <= c; i++){
		a[i] = i * i;
	}
	int l = 1, r = c - 1;
	while (l <= r){
		if (a[l] + a[r] == a[c]){
			sum++;
			l++;
			r--; 
		}else if (a[l] + a[r] < a[c]){	
			  l++; 
		}else r--;
	}
	 cout << sum << endl;
	return 0;
}
