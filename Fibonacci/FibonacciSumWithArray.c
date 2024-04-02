#include <stdio.h>
int fibo(int n)
{
    int arr[n-1];
    int x=0, y=1,sum=0;
    arr[0]=x;arr[1]=y;
    for(int i=2;i<n;i++)
    {
        sum=x+y;
        x=y;
        y=sum;
        arr[i]=sum;
    }
    sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
void main()
{
    printf("Enter the value of n:\n");
    int n;
    scanf("%d",&n);
    printf("The sum of fibonacci series upto %d terms = %d\n",n,fibo(n));
}