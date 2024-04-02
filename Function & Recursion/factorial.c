#include <stdio.h>
int fact(int n)
{
    if(n==1)
    return 1;
    else
    return n*fact(n-1);
}
void main()
{
    printf("Enter the value of n \n");
    int n;
    scanf("%d",&n);
    printf("Factorial of %d = %d\n",n,fact(n));
}