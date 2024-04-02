#include <stdio.h>
void main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d",&year);
    if(year%100==0)
        printf("%d is a Century year",year);
    else if (year%4==0)
        printf("%d is a Leap year",year);
    else printf("%d is not a Leap year",year);
}