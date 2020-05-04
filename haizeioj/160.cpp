#include <iostream>
#include <cmath>
using namespace std;
const double p = 3.14;
int main() {
	double r, h;
	cin >> r >> h;
	double a = 2 * (p * pow(r, 2) / 2 + 2 * pow(r, 2));
	double b = (p * r + 2 * r + sqrt(8 * pow(r, 2))) * h;
	printf("%.2f", a + b);
	return 0;
} 
