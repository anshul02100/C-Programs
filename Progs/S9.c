#include <stdio.h>
void main()
{
    printf("Enter the value for (n): \n");
    int n,sum=0,x=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            sum=sum-x;
        else
            sum=sum+x;
        x=x+2;
    }
    printf("Sum = %d\n",sum);
}