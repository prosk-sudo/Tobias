#include <stdio.h>

void reverseArray(int array[], int size) {
	int temp;
	for (int i = 0; i < size / 2; i++) {
		temp = array[i];
		array[i] = array[size - i - 1];
		array[size - i - 1] = temp;
	}
	printf("Reversed array is: ");
	
	for (int j = 0; j < size; j++) {
		printf("%d ", array[j]);
	}
	printf("\n");
}

int main() {
	int array1[] = {2, 5, 3, 1};
	int array2[] = {1, 2, 3};
	int array3[] = {-3, 7, -19, 28, 5};

	reverseArray(array1, 4);
        reverseArray(array2, 3);
        reverseArray(array3, 5);

	return 0;
}
