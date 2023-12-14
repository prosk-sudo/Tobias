#include <stdio.h>
#include <stdbool.h>

int main(){
	double income;
	double rate = 33.1;

	printf("Enter your income: ");
	scanf("%lf", &income);
	printf("Exact value of tax: %lf\n", rate * income / 100);

	return 0;
}
