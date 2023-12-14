#include <stdio.h>
#include <stdbool.h>

int main() {
    int n, count = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 1) {
        printf("%d, ", n);

        if (n % 2 == 0) {
            n /= 2;
        }
        else {
            n = 3*n + 1;
        }
        count += 1;
    }
    printf("1\n");
    printf("The number of steps is: %d\n", count);
    return 0;
}
