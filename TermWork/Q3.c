#include <stdio.h>
#include <math.h>
void main()
{
    int basicS;
    printf("Enter the amount of basic salary :\n");
    scanf("%d",&basicS);
    float DA,HR;
    DA=(40*basicS)/100;
    HR=(20*basicS)/100;
    float grossS=(DA+basicS)+(HR+basicS);
    printf("Gross Salary = %.2f\n",grossS);
}