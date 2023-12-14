#include <stdio.h>
#include <stdbool.h>

int main() {
	int points;
	if(scanf("%d", &points) != 1) {
		printf("Failed to read input.\n");
		return 1;
	}

	switch (points) {
		case 3:
		case 1:
			printf("Odd\n");
			break;

		case 2:
		case 0:
			printf("Even\n");
			break;

		default:
			printf("Invalid input.\n");
			break;
	}
	return 0;
}

