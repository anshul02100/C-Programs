#include<stdio.h>
void swap(int *p,int *q){
    int temp=*p;
    *p=*q;
    *q=temp;
}
int main() {
    printf("Enter two numbers : ");
    int m,n;
    scanf("%d %d",&m,&n);
    printf("Before Swapping -> m = %d n = %d\n",m,n);
    swap(&m,&n);
    printf("After Swapping -> m = %d n = %d\n",m,n);
    return 0;
}