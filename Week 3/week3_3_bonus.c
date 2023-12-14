#include <stdio.h>

int main() {
    int first_num = 1, steps, count;

    printf("Provide a number of steps: ");
    scanf("%d", &steps);

    while (1) {
        int num = first_num;
        count = 0;

        while (num != 1 && count <= steps) {
            if (num % 2 == 0) {
                num /= 2;
            }
            else {
                num = 3*num + 1;
            }
            count += 1;

            if (count == steps && num == 1) {
                printf("The smallest number with %d steps is: %d\n", steps, first_num);
                return 0;
            }
        }
        first_num++;
    }
    return 0;
}
