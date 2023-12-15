#include <stdio.h>
#include <math.h>

#define ull unsigned long long

ull peopleNeeded(ull n) {
    ull k = (ull) ceil(sqrt(n));

    while ((k * k - n) < 0) {
        k++;
    }

    return k * k - n;
}

int main() {
    ull n;
    scanf("%llu", &n);

    ull result = peopleNeeded(n);
    printf("%llu\n", result);
    return 0;
}

