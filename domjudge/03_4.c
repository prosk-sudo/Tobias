#include <stdio.h>

int main() {
    double v, g, t;

    scanf("%lf %lf %lf", &v, &g, &t);

    int elapsedTime = 0;
    double currVolume = v;

    while (currVolume < t) {
        currVolume += g * currVolume;
        elapsedTime++;
    }

    printf("%d\n", elapsedTime);
    return 0;
}
