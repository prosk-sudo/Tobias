#include <stdio.h>
#include <stdbool.h>

int main(){
	double fahrenheit;
	double celsius;

	printf("Enter a temperature in Fahrenheit: ");
	scanf("%lf", &fahrenheit);
	
	celsius = (fahrenheit - 32) / 1.8;
	
	printf("The temperature you provided is %lf in Celsius", celsius);

	return 0;
}
