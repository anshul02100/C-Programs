#include <stdio.h>
void main()
{
    printf("Enter the value for (n): \n");
    int n;
    scanf("%d",&n);
    float sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+(1.0/i);
    }
    printf("Sum = %f\n",sum);
}