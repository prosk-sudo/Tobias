#include <stdio.h>
#include <stdlib.h>

void print_int_array(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int *array = (int *)malloc(sizeof(int) * 5);
    for (int i = 0; i < 5; i++) {
        array[i] = i;
    }
    print_int_array(array, 5);
    free(array);
}
