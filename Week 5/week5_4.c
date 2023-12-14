#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char *read_line() {
    char input;
    int pos = 0;
    int size = 2;
    char *array = malloc(sizeof(char[size]));

    while (true) {
        input = getc(stdin);
        if (input == '\n') {
            break;
        }
        if (pos == size - 1) {
            // Can also use realloc()
            char *new_array = malloc(sizeof(char[size * 2]));
            for (int i = 0; i < size; i++) {
                new_array[i] = array[i];
            }
            free(array);
            array = new_array;
            size *= 2;
        }
        array[pos] = input;
        pos += 1;
    }

    array[pos] = '\0';
    return array;
}

int main() {
    int pos = 0;
    int size = 2;
    char **lines = malloc(sizeof(char*[size]));

    while (true) {
        char *line = read_line();
        if (line[0] == '\0') {
            break;
        }
        if (pos == size) {
            size *= 2;
            lines = realloc(lines, sizeof(char*[size]));
        }
        lines[pos] = line;
        pos += 1;
    }

    for (int i = pos - 1; i >= 0; i--) {
        printf("%s\n", lines[i]);
    }

    for (int i = 0; i < pos; i++) {
        free(lines[i]);
    }
    free(lines);
    lines = NULL;

    return 0;
}
