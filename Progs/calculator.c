#include <stdio.h>
void main()
{
    printf("------- Basic Calculator Programm -------\n");
    printf("Enter '+' to add\n");
    printf("Enter '-' to subtract\n");
    printf("Enter '*' to multiply\n");
    printf("Enter '/' to divide\n");
    char ch;
    scanf("%c", &ch);
    printf("Enter to numbers to calculate their ");
    if (ch == '+')
        printf("sum.\n");
    else if (ch == '-')
        printf("difference.\n");
    else if (ch == '*')
        printf("product.\n");
    else if (ch == '/')
        printf("quotient.\n");
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    double ans;
    switch (ch)
    {
        case '+':
        ans=num1+num2;
        break;
        case '-':
        ans=num1-num2;
        break;
        case '*':
        ans=num1*num2;
        break;
        case '/':
        ans=num1/num2;
        break;
        default:
        printf("Wrong input !!\n");
    }
    printf("%d %c %d = %d",num1,ch,num2,ans);
}