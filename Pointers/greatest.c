#include<stdio.h>

int main() {
    printf("Enter two numbers : ");
    int m,n;
    scanf("%d %d",&m,&n);
    int *p=&m;
    int *q=&n;
    if(*p>*q)
        printf("%d is greater than %d\n",*p,*q);
    else printf("%d is greater than %d\n",*q,*p);
    return 0;
}