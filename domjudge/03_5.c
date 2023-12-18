#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, w, h;
    scanf("%d %d %d %d", &n, &m, &w, &h);

    int **land = (int **)malloc(m * sizeof(int *));

	for (int i = 0; i < m; i++) {
        land[i] = (int *)malloc(n * sizeof(int));
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &land[i][j]);
        }
    }

    int minCost = 1e9;

    for (int i = 0; i <= m - h; i++) {
        int sum = 0;

        for (int k = i; k < i + h; k++) {
            for (int l = 0; l < w; l++) {
                sum += land[k][l];
            }
        }

        if (sum < minCost) {
            minCost = sum;
        }

        for (int j = 1; j <= n - w; j++) {
            for (int k = i; k < i + h; k++) {
                sum = sum - land[k][j - 1] + land[k][j + w - 1];
            }

            if (sum < minCost) {
                minCost = sum;
            }
        }
    }

    printf("%d\n", minCost);

    for (int i = 0; i < m; i++) {
        free(land[i]);
    }

    free(land);
    return 0;
}
