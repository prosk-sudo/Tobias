#include <stdio.h>

void swap(int *first, int *second) {
    int temp = *first;
    *first = *second;
    *second = temp;
}

void sort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int pos = i;

        for (int j = i + 1; j < size; j++) {
            if (array[pos] > array[j]) {
                pos = j;
            }
        }
        swap(&array[pos], &array[i]);
    }
}

int main() {
    int array[5] = {3, 2, 4, 1, 5};
    sort(array, 5);
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}

// int find_min_pos(int array[], int start, int size) {
//     int pos = start;
//     for (int i = start + 1; i < size; i++) {
//         if (array[pos] > array[i]) pos = i;
//     }
//     return pos;
// }

// void sort(int array[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         int pos = find_min_pos(array, i, size);
//         swap(&array[pos], &array[i]);
//     }
// }
