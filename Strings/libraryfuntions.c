#include <stdio.h>
#include <string.h>
void main()
{
    char str1[100],str2[100];
    printf("Enter String 1 : ");
    gets(str1);
    printf("Enter String 2 : ");
    gets(str2);
    printf("Length of string1 = %d\nLength of string2 = %d\n",strlen(str1),strlen(str2));
    printf("Reverse -> string1 = %s\tstring2 = %s\n",strrev(str1),strrev(str2));
    strrev(str1);strrev(str2);
    printf("String1 == String2 ??\n");
    if(strcmpi(str1,str2))
        printf("No\n");
    else    printf("Yes\n");
    printf("To lower String1 = %s\tString2 = %s\n",strlwr(str1),strlwr(str2));
    printf("To upper String1 = %s\tString2 = %s\n",strupr(str1),strupr(str2));
    printf("Concat = %s\n",strcat(str1,str2));
}