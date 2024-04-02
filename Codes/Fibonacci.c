#include <stdio.h>
int flag=1;
void fibo(int n,int num1,int num2)
{
    if(flag<=n)
    {
        printf("%d ",num1);
        flag++;
        fibo(n,num2,num1+num2);
    }
}
void main()
{
    printf("Enter the value of n:\n");
    int n;
    scanf("%d",&n);
    printf("Fibonacci series upto %d terms : \n",n);
    fibo(n,0,1);
}