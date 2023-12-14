/* #include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  if (b < a) {
    int c = a;
    a = b;
    b = c;
  }
  printf("%d %d\n", a, b);
  return 0;
} */

#include <stdio.h>

void sort(int *a, int *b) {
  if (*b < *a) {
    int c = *a;
    *a = *b;
    *b = c;
  }
}

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  sort(&a, &b);
  printf("%d %d\n", a, b);

  return 0;
}
