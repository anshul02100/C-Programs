#include<stdio.h>
void main()
{
    printf("Enter the limit of the array:\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Elements divisible by both 3 and 5 are :\n");
    for(int i=0;i<n;i++)
    {
        if(arr[i]%3==0&&arr[i]%5==0)
            printf("%d ",arr[i]);
    }
}