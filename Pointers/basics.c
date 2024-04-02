#include<stdio.h>
void main()
{
    int m=5,n=10;
    int *p=&m; //stores the address of m (& = address of operator)
    int *q=&n; //stores the address of n
    printf("Value of m and n = %d %d\n",m,n);          //prints the value of m and n
    printf("Value of m and n = %d %d\n",*p,*q);        //prints the value of m and n
    printf("Value of m and n = %d %d\n",*(&m),*(&n));  //prints the value of m and n
    printf("Adress of m and n = %p %p\n",p,q);          //prints the adress of m and n
    printf("Adress of m and n = %p %p\n",&m,&n);        //prints the adress of m and n
}