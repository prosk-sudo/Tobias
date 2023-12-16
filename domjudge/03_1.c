#include <stdio.h>
#include <math.h>

double expectedPayoff(int n, int c, int r, double p) {
	double variable = p;

	if (n == 1) {
		return p * r - c;
	}

	for (int i = 2; i < n+1; i++) {
		variable *= 1 - pow(1-p, i);
	}
	
	return variable * r - c;
}

double calculateP(int n, int c, int r) {
	double left = 0.0;
	double right = 1.0;

	while (right - left > 1e-9) {
		double mid = (left + right) / 2.0;
		double function = expectedPayoff(n, c, r, mid);

		if (function > 0) {
			right = mid;
		} else {
			left = mid;
		}
	}

	return left;
}

int main() {
	int n, c, r;
	scanf("%d %d %d", &n, &c, &r);

	double maxProbability = calculateP(n, c, r);

	printf("%g\n", maxProbability);
	return 0;
}
