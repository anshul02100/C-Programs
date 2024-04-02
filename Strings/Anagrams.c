#include <stdio.h>
#include <string.h>

void main()
{
    char str1[100],str2[100];
    printf("Enter String 1 : ");
    gets(str1);
    printf("Enter String 2 : ");
    gets(str2);
    int count=0;
    if(strlen(str1)==strlen(str2))
    {
        for(int i=0;i<strlen(str1);i++)
        {
            for(int j=0;j<strlen(str1);j++)
            {
                if(str1[i]==str2[j])
                {
                    count++;
                }
            }
        }
        if(count==strlen(str1))
            printf("Input Strings are anagrams.\n");
        else printf("Input strings are not anagrams.\n");
    }
    else printf("Input strings are not anagrams.\n");
}