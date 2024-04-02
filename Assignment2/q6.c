#include <stdio.h>
#include <string.h>

void main() {
    printf("Enter a string : ");
    char str[100];
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0';
    printf("Enter the substring you want to search for : ");
    char srch[100];
    fgets(srch, 100, stdin);
    srch[strlen(srch) - 1] = '\0';
    int wordcount = 0;
    for(int i = 0; i < strlen(str); i++) {
        if(str[i] == srch[0]) {
            int count = 0;
            for(int j = i, k = 0; j < strlen(srch) + i; k++, j++) {
                if(str[j] == srch[k])
                    count++;
            }
            if(count == strlen(srch))
                wordcount++;
        }
    }
    printf("Number of times substring (%s) found in the input string : %d", srch, wordcount);
}
