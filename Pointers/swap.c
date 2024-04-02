#include<stdio.h>
int main() {
    printf("Enter two numbers : ");
    int m,n;
    scanf("%d %d",&m,&n);
    int *p=&m;
    int *q=&n;
    printf("Before Swapping -> m = %d n = %d\n",*p,*q);
    //swap
    int *temp=p;
    p=q;
    q=temp;
    printf(aa"After Swapping -> m = %d n = %d\n",*p,*q);
    return 0;
}