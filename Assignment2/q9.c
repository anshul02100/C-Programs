#include<stdio.h>
void main()
{
    int m,n;
    printf("Enter number of rows : ");
    scanf("%d",&m);
    printf("Enter number of columns : ");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    }   
    int max=arr[0][0];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]>max)
                max=arr[i][j];
        }
    }
    printf("Maximum number in the matrix : %d",max);
}