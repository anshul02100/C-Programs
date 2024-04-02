#include <stdio.h>
#include <math.h>
void main()
{
    printf("ax^2+bx+c\n");
    printf("Enter the coefficient of x^2.\n");
    int a;
    scanf("%d",&a);
    printf("Enter the coefficient of x.\n");
    int b;
    scanf("%d",&b);
    printf("Enter the value of c.\n");
    int c;
    scanf("%d",&c);
    float root1,root2;
    root1=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
    root2=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
    printf("First root = %.2f\nSecond root = %.2f\n",root1,root2);
}