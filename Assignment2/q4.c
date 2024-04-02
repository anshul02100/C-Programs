#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    printf("Enter a string : ");
    fgets(str,100,stdin);
    int l=strlen(str);
    for(int i=0;i<l;i++)
    {
        if(str[i]==' ')
        {
            for(int j=i;j<l-1;j++)
            {
                char temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
            }
        }
    }
    printf("String after removing spaces : %s",str);
}