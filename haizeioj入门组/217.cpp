#include<algorithm>
#include<iostream>
using namespace std;
 
int main() {
  	int n, c, d;
  	cin >> n;
  	int a[n + 5];
  	for(int i = 1; i <= n; i++) cin >> a[i];
  	sort(a + 1, a + n + 1);
  	c = a[n / 2 + 1];
  	int i;
  	for(i = 1; i <= n; i++){
    	if(a[i] == c){
  	    	d = n - i + 1;
  	    	break;
    	}
  	}
  	cout << c << " " << d << endl;
    return 0;
}

