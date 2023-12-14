#include <stdio.h>
#include <stdbool.h>

int main() {
	int n, sum = 0;
	printf("Give me a positive integer: ");
	
	while (true) {
		if (scanf("%d", &n) != 1 || n <= 0) {
			printf("You entered an invalid input.\n");
			scanf("%*s");
			printf("Try again: ");
		} else {
		break;
		}
	}
	
	for (int i = 1; i <= n; i++) {
		sum += i;
	}
	
	printf("Your triangular number is: %d\n", sum);
	return 0;
}
