#include <iostream>
using namespace std;
#include <cmath>
struct win {
	int l;
	int r;
	int u;
	int d;
}a[10];
int main() {
	int x1, x2;          
    int y1, y2;          
    int w1, w2;      
    int h1, h2;   
	for (int i = 1; i <= 2; i++) {
		cin >> a[i].l >> a[i].r >> a[i].u >> a[i].d;
	}
	x1 = a[1].l;   x2 = a[2].l;
	y1 = a[1].u;   y2 = a[2].u;
	w1 = a[1].r - a[1].l; 	w2 = a[2].r - a[2].l;
	h1 = a[1].d - a[1].u;   h2 = a[2].d - a[2].u;
	int startx = min(x1, x2); 
	int endx = max(x1 + w1, x2 + w2);
	int over_w = w1 + w2 - (endx - startx);
	int starty = min(y1, y2); 
	int endy = max(y1 + h1, y2 + h2);
	int over_h = h1 + h2- (endy - starty);
	int s = over_w * over_h;
	if (x1 + w1  > x2 &&
        x2 + w2  > x1 &&
        y1 + h1 > y2 &&
        y2 + h2 > y1) {
        	cout << s;
	} else {
		cout << 0 << endl; 
	}	
	return 0;
} 
