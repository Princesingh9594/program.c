#include <stdio.h>

int main() {
    int m, n, p;
    
    // Input sizes
    printf("Enter rows and columns of Matrix A (m n): ");
    scanf("%d %d", &m, &n);

    printf("Enter columns of Matrix B (p): ");
    scanf("%d", &p);

    int A[m][n], B[n][p], C[m][p];

    // Input Matrix A
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    // Input Matrix B
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            scanf("%d", &B[i][j]);

    // Initialize Matrix C
    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
            C[i][j] = 0;

    // Matrix multiplication
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output
    printf("Resultant Matrix C (A × B):\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
