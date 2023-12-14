#include <stdio.h>
#include <stdbool.h>

int main(){
	int n, m;

	printf("Provide two integers, separated by space: ");
	scanf("%d %d", &n, &m);
	printf("Integer: %d, Decimal: %g.\n", n/m, (double)n/m);
	
	return 0;
}
