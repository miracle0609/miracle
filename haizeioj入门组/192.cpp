#include<iostream>
using namespace std;
#include<cmath>
#include<iomanip>
int a;
double fun(double l, double r)
{
  const double eps = 1e-7;
  while(r - l > eps)
  {
    double mid = (l + r) / 2;
    if(mid * exp(mid) > a)r = mid;
    else l = mid;
  }
  return l;
}
int main() {
    cin >> a;
    cout << fixed << setprecision(4) << fun(0, a) << endl;
    return 0;
}

