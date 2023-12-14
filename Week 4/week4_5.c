#include <stdio.h>

int main() {
    double n;
    char c = 0;
    double currVal = 0;
    while (c != 'e') {
        printf("Current value: %lf\n", currVal);
        printf("Enter operation: ");
        scanf(" %c %lf", &c, &n);
    
        switch (c) {
            case '+':
                currVal += n;
                break;
            case '-':
                currVal -= n;
                break;
            case '/':
                if (n != 0) {
                    currVal /= n;
                } else {
                    printf("It is not allowed to divide by 0!\n");
                }
                break;
            case '*':
                currVal *= n;
                break;
            default:
                printf("Operation not found '%c'\n", c);
                break;
        }
    }
    return 0;
}
