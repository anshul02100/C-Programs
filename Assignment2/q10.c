#include<stdio.h>
#include <string.h>
void main()
{
    printf("Enter a string : ");
    char str[100];
    fgets(str,100,stdin);
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]=='a'||str[i]=='A')
            str[i]='$';
    }
    printf("String after replacing every 'a' with '$' : %s",str);
}