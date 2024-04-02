#include<stdio.h>
int sum(int *arr,int *n)
{
    int s=0;
    for(int i=0;i<*n;i++)
        s=s+*(arr+i);
    return s;
}
void main()
{
    int n;
    printf("Enter the limit of the array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int s=sum(arr,&n);
    printf("Sum of all elements of the array = %d",s);
}