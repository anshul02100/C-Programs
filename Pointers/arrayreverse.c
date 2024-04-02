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
    printf("Array after reversing : ");
    for(int i=0;i<n/2;i++)
    {
        int temp=*(arr+i);
        *(arr+i)=*(arr+(n-i-1));
        *(arr+(n-i-1))=temp;
    }
    for(int i=0;i<n;i++)
        printf("%d ",*(arr+i));
    return 0;
}