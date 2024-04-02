#include <stdio.h>
void main()
{
    printf("Enter the value for (n): \n");
    int n,x=2;
    float sum=1;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        sum=sum+(1.0/x);
        x=x+2;
    }
    printf("Sum = %f\n",sum);
}