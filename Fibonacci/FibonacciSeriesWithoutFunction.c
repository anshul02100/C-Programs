#include <stdio.h>
void main()
{
    printf("Enter the value for n:\n");
    int n;
    scanf("%d",&n);
    printf("0 1 ");
    n=n-2;
    int x=0,y=1;
    for(n;n>0;n--)
    {
        int sum=x+y;
        printf("%d ",sum);
        x=y;
        y=sum;
    }
}