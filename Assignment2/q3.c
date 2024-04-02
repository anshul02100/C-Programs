#include<stdio.h>
int smallest(int arr[],int n)
{
    int num=arr[0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return(arr[1]);
}
void main()
{
    printf("Enter number of elements:\n");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array : ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int small=smallest(arr,n);
    printf("Second smallest number in the array : %d\n",small);
}