#include <stdio.h>
void main()
{
    printf("Enter the value for (n): \n");
    int n,x=1;
    float sum=0.0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum=sum+(1.0/x);
        x=x+2;
    }
    printf("Sum = %f\n",sum);
}