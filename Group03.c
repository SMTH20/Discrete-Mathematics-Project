#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_N 5000

void generateGraph(int n, int graph[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                graph[i][j] = 0;
            } else {
                graph[i][j] = rand() % 2;
            }
        }
    }
}

void computeDegrees(int n, int graph[n][n], int indegree[], int outdegree[]) {
    for (int i = 0; i < n; i++) {
        indegree[i] = 0;
        outdegree[i] = 0;
        for (int j = 0; j < n; j++) {
            if (graph[i][j] == 1) {
                outdegree[i]++;
            }
            if (graph[j][i] == 1) {
                indegree[i]++;
            }
        }
    }
}

int main() {
    srand(time(0));

    int sizes[] = {1000, 2000, 3000, 4000, 5000};
    int numSizes = 5;

    for (int s = 0; s < numSizes; s++) {
        int n = sizes[s];
        static int graph[MAX_N][MAX_N];
        static int indegree[MAX_N], outdegree[MAX_N];

        generateGraph(n, graph);

        clock_t start = clock();

        computeDegrees(n, graph, indegree, outdegree);

        clock_t end = clock();
        double timeTaken = ((double)(end - start)) * 1000.0 / CLOCKS_PER_SEC;

        long long sumIn = 0, sumOut = 0;
        for (int i = 0; i < n; i++) {
            sumIn += indegree[i];
            sumOut += outdegree[i];
        }

        printf("For n = %d:\n", n);
        printf("  Sum of In-degrees  = %lld\n", sumIn);
        printf("  Sum of Out-degrees = %lld\n", sumOut);
        if (sumIn == sumOut) {
            printf("  Verified: Sum(In) == Sum(Out)\n");
        } else {
            printf("  ERROR: Sum(In) != Sum(Out)\n");
        }
        printf("  Computational Time = %.3f ms\n\n", timeTaken);
    }

    return 0;
}
