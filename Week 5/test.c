#include <stdio.h>
#include <stdlib.h>

int main() {
	int size;
	char *text;
	printf("Enter size: ");
	scanf("%d", &size);
	text = malloc((size + 1) * sizeof(char));
	if (text == NULL) {
		printf("Sorry, no space");
		return 1;
	}
	scanf("%s", text);
	printf("You wrote: %s", text);
}
