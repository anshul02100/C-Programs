#include<stdio.h>
void maxmin(int arr[],int n,int *p,int *max,int *min)
{
    for(int i=0;i<n;i++)
    {
        if(*(p+i)>*max)
            *max=*(p+i);
        if(*(p+i)<*min)
            *min=*(p+i);
    }
}
int main() {
    printf("Enter the size of the array : ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array : \n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int max=0,min=arr[0];
    maxmin(arr,n,&arr[0],&max,&min);
    printf("Max = %d\n",max);
    printf("Min = %d\n",min);
    return 0;
}