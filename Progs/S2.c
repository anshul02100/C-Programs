#include<stdio.h>
void main() 
{
    int n, sum = 0;
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) 
    {
        sum += i * i;
    }
    printf("Sum of the series: %d\n", sum);
}