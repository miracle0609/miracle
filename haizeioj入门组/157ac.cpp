#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int c = 65;
	for (int i = 1; i <= n; i++) {
		for (int j = n - i + 1; j < n ; j++) {
			cout << " ";
		}
		for (int j = 2 * i - 1; j <= 2 * n - 1; j++) {
			cout << (char) c;
			if (j < i + n - 1) {
				c += 1;
			} else {
				c -= 1;
			}
		}
		c += 2;
		cout << endl;  
	}
	c -=  2;
	 int t = 0, p = 0, q = 1;
     for(int i = 1; i <= n - 1; i++ ){
     	for( int j = i; j < n - 1 ; j++)
     	  cout << " ";
     	for(int k = 1; k <= 3 + t; k++)
     	 if( k <= i + 1)
     	  {
		     cout << char(n + 64 - i + p);
     	          p++;}
     	  else {
     	  	cout << char(n + 63 - i + p - q);
     	  	q++;
		   }
		   t = t + 2;
		   q = 1;
		   p = 0;
		   cout << '\n';
	 }
//	for (int i = 1; i < n; i++) {
//		for (int j = 1; j  < n - i; j++) {
//			cout << " ";
//		}
//		for (int j = 1; j <= 2 * i + 1; j++) {
//			if (j < (2 * i + n + 1) / 2 - 1) {
//				cout << char (c + p);
//				p++;
//			} else {
//				p--;
//				cout << char (c + p - 1);
//			}
//		}  
//		c -= 1;
//		p = 0;
//		q = 0;
//		cout << endl;  
//	}
	
	
	return 0;
} 
