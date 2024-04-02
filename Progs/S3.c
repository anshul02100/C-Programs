#include <stdio.h>
void main() {
    int n;
    int sum = 0;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    int i = 1;
    while (i <= n) 
    {
        int term = 1;
        int j = 0;
        while (j < i)
        {
            term *= i;
            ++j;
        }
        sum += term;
        i++;
    }
    printf("Sum of the series: %d\n", sum);
}
