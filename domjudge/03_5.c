/*
#include <stdio.h>
#include <stdlib.h>

void readInput(int *n, int *m, int *w, int *h, int ***land) {
    scanf("%d %d %d %d", n, m, w, h);

    *land = (int **)malloc(*m * sizeof(int *));

    for (int i = 0; i < *m; i++) {
        (*land)[i] = (int *)malloc(*n * sizeof(int));
        for (int j = 0; j < *n; j++) {
            scanf("%d", &(*land)[i][j]);
        }
    }
}

int minimumCost(int n, int m, int w, int h, int **land) {
    int minCost = 0;

    for (int i = 0; i <= n - w; i++) {
        for (int j = 0; j <= m - h; j++) {
            int cost = 0;

            for (int k = i; k < i + w; k++) {
                for (int l = j; l < j + h; l++) {
                    cost += land[l][k];
                }
            }

            if (minCost == 0 || cost < minCost) {
                minCost = cost;
            }
        }
    }

    return minCost;
}

int main() {
    int n, m, w, h;
    int **land;
    readInput(&n, &m, &w, &h, &land);

    int minCost = minimumCost(n, m, w, h, land);
    printf("%d\n", minCost);

    for (int i = 0; i < m; i++) {
        free(land[i]);
    }
    free(land);

    return 0;
} 
*/

#include <stdio.h>
#include <stdlib.h>

void readInput(int *n, int *m, int *w, int *h, int ***land) {
    scanf("%d %d %d %d", n, m, w, h);

    *land = (int **)malloc(*m * sizeof(int *));

    for (int i = 0; i < *m; i++) {
        (*land)[i] = (int *)malloc(*n * sizeof(int));
        for (int j = 0; j < *n; j++) {
            scanf("%d", &(*land)[i][j]);
        }
    }
}

int minCost(int n, int m, int w, int h, int **land) {
    int **totalSum = (int **)malloc((m + 1) * sizeof(int *));

    for (int i = 0; i <= m; i++) {
        totalSum[i] = (int *)calloc((n + 1), sizeof(int));
    }

    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            totalSum[i][j] = totalSum[i - 1][j] + totalSum[i][j - 1] - totalSum[i - 1][j - 1] + land[i - 1][j - 1];
        }
    }

    int minCost = 0;

    for (int i = w; i <= n; i++) {
        for (int j = h; j <= m; j++) {
            int cost = totalSum[j][i] - totalSum[j - h][i] - totalSum[j][i - w] + totalSum[j - h][i - w];

			if (minCost == 0 || cost < minCost) {
                minCost = cost;
            }
        }
    }

    for (int i = 0; i <= m; i++) {
        free(totalSum[i]);
    }

    free(totalSum);
    return minCost;
}

int main() {
	int n, m, w, h;
	int **land;
	readInput(&n, &m, &w, &h, &land);

	int result = minCost(n, m, w, h, land);
	printf("%d\n", result);

	for (int i = 0; i <= m; i++) {
		free(land[i]);
	}

	free(land);
	return 0;
}

