#include<stdio.h>
void main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    int arr[n];
    int num=2,x=0;
    while(n>0)
    {
        int flag=1;
        for(int i=2;i<=num/2;i++)
        {
            if(num%i==0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            arr[x++]=num;
            n--;
        }
        num++;
    }
    printf("Array elements are:\n");
    for(int i=0;i<x;i++)
        printf("%d ",arr[i]);
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            for(int k=0;k<x;k++)
            {
                for(int l=0;l<x;l++)
                {
                    if((arr[i]+arr[j]+arr[k])==arr[l])
                    {
                        printf("%d+%d+%d=%d\n",arr[i],arr[j],arr[k],arr[l]);
                    }
                }
            }
        }
    }
}