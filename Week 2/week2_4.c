#include <stdio.h>
#include <stdbool.h>

int main(){
	int total;

	printf("Enter an amount: ");
	scanf("%d", &total);

	printf("20 euros: %d\n", total / 20);
	total %= 20;

	printf("10 euros: %d\n", total / 10);
	total %= 10;

	printf("5 euros: %d\n", total / 5);
	total %= 5;

	printf("2 euros: %d\n", total / 2);
	total %= 2;

	printf("1 euro: %d\n", total);

	return 0;
}
