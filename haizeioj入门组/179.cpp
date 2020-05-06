#include <cstdio>
#include <cmath>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);
int main() {
    int p;
    int q;
    scanf("%d %d", &p, &q);
    printf("%.4lf\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double)) {
	double a1 = -20;
	double a2 = 20;
	double a = 0;
	while (fabs((*func)(p, q, a)) > EPSILON)
	{
		a = (a1 + a2) / 2.0;
		double fa1 = (*func)(p, q, a1);
		double fa =  (*func)(p, q, a);
		if (fa * fa1 > 0) {
			a1 = a;
		} else {
			a2 = a;
		}
	}
	return a;
}

double f(int p, int q, double x) {
    return p * x + q;
}
