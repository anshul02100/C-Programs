#include<stdio.h>
int main() {
    printf("Enter the size of the array : ");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array : \n");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int *p=&arr[0];
    printf("Array elements are :\n");
    for(int i=0;i<n;i++)
        printf("%d ",*(p+i));
}