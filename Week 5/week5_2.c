#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
	while (true) {
		int *arr = (int *)malloc(sizeof(int));
		free(arr);
	}
	return 0;
}
