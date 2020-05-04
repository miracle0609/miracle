#include <iostream>
using namespace std;
#define max 1000005
int a[max];
int b[max];
int main() {
	int n, k;
	
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> a[i]; 
	}
	for (int i = 1; i <= k; i++) {
		cin >> b[i];
	}
	int l, r;
	int mid, s;
	for (int i = 1; i <= k; i++) {
		  s = 0; l = 1; r = n;
		while (l <= r) {
			mid = (l + r) >> 1;
			if (a[mid] > b[i])  {
					r = mid - 1; 
			} else if (a[mid] < b[i]) {
					l = mid + 1;
			} else   {
				s = mid;
				break; 
			} 
		}
		cout << s;
		(i != k) && cout << " ";
	}	
	return 0;
} 
