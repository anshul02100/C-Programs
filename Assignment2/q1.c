#include <stdio.h>

void F(char A[][100], int m, int n) {
    printf("Enter values for the 2D array:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf(" %c", &A[i][j]); 
        }
    }
}
void main() {
    char A[80][100];
    int m, n;
    printf("Enter the number of rows (m <= 80): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n <= 100): ");
    scanf("%d", &n);
    if (m > 80 || n > 100)
        printf("Invalid dimensions!\n");
    F(A, m, n);
    printf("The 2D array you entered:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            printf("%c ", A[i][j]);
        printf("\n");
    }
}
