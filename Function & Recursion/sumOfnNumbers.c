#include <stdio.h>
int sum(int n)
{
    if(n==0)
    return 0;
    else
    return n+sum(n-1);
}
void main()
{
    printf("Enter the value of n:\n");
    int n;
    scanf("%d",&n);
    printf("Sum of series = %d",sum(n));
}