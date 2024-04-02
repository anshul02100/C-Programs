#include <stdio.h>
#include <math.h>
void main()
{
    int b,l,r,pR,aR;
    printf("\n\t*****INPUT*****\n\n");
    printf("Enter the length of the rectangle: \n");
    scanf("%d",&l);
    printf("Enter the breadth of the rectangle: \n");
    scanf("%d",&b);
    aR=l*b;  pR=l+b;
    printf("Area of the rectangle = %d\nPerimeter of the rectangle = %d\n",aR,pR);
    printf("Enter the radius of the circle: \n");
    scanf("%d",&r);
    float aC=3.14*pow(r,2);   float pC=2*3.14*r;
    printf("Area of the circle = %.2f\nPerimeter of the circle = %.2f\n",aC,pC);
}