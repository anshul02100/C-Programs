#include <stdio.h>
void main() 
{
    int n,i=1,sum = 0;
    printf("Enter the number of terms (n): \n");
    scanf("%d", &n);
    while (i <= n) 
    {
        if (i % 2 == 0) 
        {
            sum -= i;
        } 
        else 
        {
            sum = sum + i;
        }
        i++;
    }
    printf("Sum of the series: %d\n", sum);
}