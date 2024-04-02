#include <stdio.h>
void main()
{
    printf("Enter the value for (n): \n");
    int n;
    int fact=1;
    float sum=0.0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+(1.0/fact);
    }
    printf("Sum = %f\n",sum);
}