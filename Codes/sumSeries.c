#include <stdio.h>
int sumS(int n)
{
    if (n==1) 
        return 1;
    else if (n%2==0) 
        return -n+sumS(n-1);
    else 
        return n+sumS(n-1);
}
void main()
{
    printf("Enter the value of n:\n");
    int n;
    scanf("%d",&n);
    printf("Sum of series 1-2+3-4+5..... upto %d terms : %d\n",n,sumS(n));
}