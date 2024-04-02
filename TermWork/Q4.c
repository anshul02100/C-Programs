#include <stdio.h>
void main()
{
    int num1,num2;
    printf("Enter two numbers: \n");
    scanf("%d %d",&num1,&num2);
    printf("Before Swapping : \nFirst number = %d\nSecond number = %d\n",num1,num2);
    int temp;
    temp=num1+num2;
    num1=temp-num1;
    num2=temp-num1;
    printf("After Swapping : \nFirst number = %d\nSecond number = %d\n",num1,num2);
}