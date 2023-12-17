#include <stdio.h>
#include <math.h>

enum Operation {
    PLUS,
    MINUS,
    TIMES,
    TO_THE_POWER_OF
} opcode;

char isFirst = 1;
int result = 0;
int n = 0;

void op() {
    switch (opcode) {
    case PLUS:
        result += n;
        break;

    case MINUS:
        result -= n;
        break;

    case TIMES:
        result *= n;
        break;

    case TO_THE_POWER_OF:
        result = pow(result, n);
        break;
    }
    n = 0;
}

int main() {
    char str[1001];
    scanf("%s", str);

    for (int i = 0; str[i]; i++) {
        char ch = str[i];

        if (ch < '0' || '9' < ch) {
            if (isFirst) {
                result = n;
                n = 0;
                isFirst = 0;
            } else {
                op();
            }

            if (ch == 'p') {
                i += 3;
                opcode = PLUS;
            } else if (ch == 'm') {
                i += 4;
                opcode = MINUS;
            } else if (ch == 't') {
                if (str[i + 1] == 'i') {
                    i += 4;
                    opcode = TIMES;
                } else {
                    i += 11;
                    opcode = TO_THE_POWER_OF;
                }
            }
        } else {
            n = n * 10 + ch - '0';
        }
    }

    op();
    printf("%d\n", result);
}
