#include <stdio.h>
void main()
{
    printf("Enter the value for (n): \n");
    int n;
    int sum=0,fact=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+fact;
    }
    printf("Sum = %d\n",sum);
}