#include <iostream>
using namespace std;

int main(){ 
	int x, y, m, d;
	int k[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    cin >> x >> y >> m >> d;
    d += x;
    m--;
    k[1] = 28 + (y % 4 == 0 && y % 100 || y % 400 == 0);
    while(d > k[m]){ 
	  d -= k[m++];
      if(m > 11){ 
	  	m = 0;
        y++;
      }
     if(m == 1) k[1] = 28 + (y % 4 == 0 && y % 100 || y % 400 == 0);
  	}
	cout << y << " " << m + 1 << " " << d << endl;
	return 0;
}
