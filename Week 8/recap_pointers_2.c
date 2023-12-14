#include <stdio.h>
#include <stdlib.h>

typedef struct {
    double temperature;
    int pressure;
} weather;

void print_weather(weather arr[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%.1lf %d\n", arr[i].temperature, arr[i].pressure);
    }
}

void scan_temperatures(weather arr[], int length) {
    for (int i = 0; i < length; i++) {
        scanf("%lf", &arr[i].temperature);
    }
}

void scan_pressures(weather arr[], int length) {
    for (int i = 0; i < length; i++) {
        scanf("%d", &arr[i].pressure);
    }
}

int main() {
    int n;
    scanf("%d", &n); // hihi
    weather *array = (weather *)malloc(sizeof(weather) * n);

    scan_temperatures(array, n);
    scan_pressures(array, n);

    print_weather(array, n);
    return 0;
}
