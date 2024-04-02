#include <stdio.h>
char toLower(char ch) 
{
    if (ch >= 'A' && ch <= 'Z') 
        return ch + 32;
    return ch;
}
int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    int left = 0,right = len - 2;
    while (left < right) 
    {
        while (!((str[left] >= 'a' && str[left] <= 'z') || (str[left] >= 'A' && str[left] <= 'Z')) && left < right) {
            left++;
        }
        while (!((str[right] >= 'a' && str[right] <= 'z') || (str[right] >= 'A' && str[right] <= 'Z')) && left < right) {
            right--;
        }
        if (toLower(str[left]) != toLower(str[right])) {
            printf("The string is not a palindrome.\n");
            return 0;
        }
        left++;
        right--;
    }
    printf("The string is a palindrome.\n");
    return 0;
}
