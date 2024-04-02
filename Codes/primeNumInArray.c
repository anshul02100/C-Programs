#include <stdio.h>
void main()
{
    printf("Enter the limit of the array\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        printf("Element %d :",i+1);
        scanf("%d",&arr[i]);
    }
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                flag++;
                break;
            }
            if(flag==0)
            printf("%d ",arr[i]);
        }
    }
    printf("are all the prime numbers present in the array.\n");
}