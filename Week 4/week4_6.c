#include <stdio.h>
#include <string.h>

void strins(char s[], char t[], int pos) {
    int s_length = strlen(s);

    if (pos < 0 || pos > s_length) {
        printf("You entered an invalid position!\n");
        return;
    }
    int t_length = strlen(t);

    for (int i = s_length; i >= pos; i--) {
        s[i + t_length] = s[i];
    }

    for (int i = 0; i < t_length; i++) {
        s[i + pos] = t[i];
    }
    printf("Result is: %s\n", s);
}

int main() {
    char s[100];
    char t[100];
    int pos;
    char choice;

    do {
        printf("Enter the main string: ");
        scanf("%99[^\n]", s);
        getchar();

        printf("Enter the string to insert: ");
        scanf("%99[^\n]", t);
        getchar();

        printf("Enter the position: ");
        scanf("%d", &pos);

        strins(s, t, pos);

	printf("Would you like to continue (y/n)? ");
	scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
	return 0;
}
