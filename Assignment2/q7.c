#include<stdio.h>
void main()
{
    printf("Enter limit of the array : ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array : \n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Array : ");
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\nArray after changing odd indices with even: ");
    for(int i=0;i<n-1;)
    {
        if(i%2==0)//odd
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            i=i+2;
        }
        else i++;
    }
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
}