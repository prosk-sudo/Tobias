#include <stdio.h>
#include <math.h>

#define ld long double

ld function(ld p, int n, int c, int r) {
	return pow(p, n-1) * (1 - pow(1-p, n)) * r - c;
}

ld derivative(ld p, int n, int r) {
	return r * (n-1) * pow(p, n-2) * (1 - pow(1-p, n)) + r * n * pow(p, n-1) * pow(1-p, n-1);
}

ld pFinder(int n, ld c, ld r) {
	ld p = 0.5;

	for (int i = 0; i < pow(10, 8); i++) {
		ld fValue = function(p, n, c, r);
	    	ld fPrime = derivative(p, n, r);

		p = p - fValue / fPrime;

		if (fabs(fValue) < 1e-7) {
			return p;
		}
	}

	return p;
}

int main() {
	int n;
	int c;
	int r;

    scanf("%d %d %d", &n, &c, &r);

	ld p = pFinder(n, c, r);

	printf("%.15Lf\n", p);
	return 0;
}
