#include <stdio.h>

int strcpy2(char dst[], char src[]) {
	int i = 0;
	while (src[i] != '\0') {
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return i;
}

int main() {
	char dst[100];
	char src[] = "I am Matias Barandiaran Rivera.";

	int number = strcpy2(dst, src);
	printf("Number of characters\n in \"%s\" is %d.", src, number);
	return 0;
}
