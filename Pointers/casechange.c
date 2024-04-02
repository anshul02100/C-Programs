#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    fgets(str,100,stdin);
    char *p=&str[0];
    for(int i=0;i<strlen(str);i++)
    {
        if(*(str+i)>=97&&*(str+i)<=122)   //lower case
            *(str+i)-=32;
        else if(*(str+i)>=65&&*(str+i)<=90) 
            *(str+i)+=32;
    }
    printf("%s",str);
    return 0;
}