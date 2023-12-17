#include <stdio.h>

int elapsedTime(int v, int g, int t) {
	int time = 0;

	while (v < t) {
		time += 1;
		v += v * g;
	}

	printf("%d\n", time);
	return time;
}

int main() {
	int v, g, t;
	scanf("%d %d %d", &v, &g, &t);

	elapsedTime(v, g, t);
	return 0;
}
