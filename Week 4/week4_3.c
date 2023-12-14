#include <stdio.h>

int main() {
	int numbers;
	printf("How many numbers? ");
	scanf("%d", &numbers);
	
	if (numbers < 0 || numbers > 100) {
		printf("Please enter a number between 0 and 100.\n");
		return 1;
	}
	printf("Please enter your %d numbers: ", numbers);
	
	double sum = 0;
	double sum_square = 0;
	
	for (int i = 0; i < numbers; i++) {
		int n;
		scanf("%d", &n);
		sum += n;
		sum_square += n*n;
	}
	double average = sum / numbers;
	double var = (sum_square / numbers) - (average * average);
	
	printf("Avg: %.3lf, Var: %.3lf\n", average, var); 
	return 0;
}
