#include <stdio.h>

void printer(int array[], int size) {
	for (int i=0; i<size; i++) {
		printf("%d", array[i]);
		if (i != size - 1) {
			printf(", ");
		}
	}
	printf("\n");
	printf("The size of the array is: %d\n", size);
}

int main() {
    int given_array[] = {1, 2, 3};
    int size = sizeof(given_array) / sizeof(given_array)[0];

    printer(given_array, size);
    return 0;
}
