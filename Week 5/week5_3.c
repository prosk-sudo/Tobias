#include <stdio.h>
#include <stdlib.h>

int read_number() {
	int size;
	printf("Enter the size: ");
	scanf("%d", &size);

	return size;
}

int *read_array(int size) {
	int *array = (int *)malloc(size * sizeof(int));
	int num;
	printf("Enter numbers: ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &num);
		array[i] = num;
	}

	return array;
}

double compute_average(int *array, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += array[i];
	}
	double average = (double)sum / size;
	printf("The average is: %lf\n", average);

	return average;
}

int main() {
	int size = read_number();
	int *array = read_array(size);
	compute_average(array, size);
	free(array);

	return 0;
}
