#include<stdio.h>
void main()
{
    int m,n;
    printf("Enter number of rows: ");
    scanf("%d",&m);
    printf("Enter number of columns: ");
    scanf("%d",&n);
    int arr[m][n];
    printf("Enter the elements of the matrix: \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    }
    printf("Minimum number in: \n");
    for(int i=0;i<m;i++)
    {
        int min=arr[0][i];
        for(int j=0;j<n;j++)
        {
            if(arr[j][i]<min)
                min=arr[j][i];
        }
        printf("Column %d = %d\n",i,min);
    }
}