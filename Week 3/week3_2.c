#include <stdio.h>
#include <stdbool.h>

int main() {
    int i, n;

    int t1 = 1, t2 = 1;
    int nextTerm = t1 + t2;

    printf("Enter the number: ");
    scanf("%d", &n);

    if (n == 1) {
        printf("The 1st Fibonacci number is: %d\n", t1);
        return 0;
    }

    if (n == 2) {
        printf("The 2nd Fibonacci number is: %d\n", t2);
        return 0;
    }

    printf("The %dth Fibonacci number is: ", n);

    for (i = 3; i <= n; i++) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    
    printf("%d\n", nextTerm);
    return 0;
}

