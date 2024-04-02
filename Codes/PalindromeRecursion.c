#include <stdio.h>
int reverse(int n, int digits) {
    int r = 0;

    if (n == 0) {
        return r;
    } else {
        while (digits > 0) {
            r = (r * 10) + (n % 10);
            n = n / 10;
            digits--;
        }
        return r;
    }
}

int main() {
    printf("Enter a number to check whether it is a palindrome or not\n");
    int n;
    scanf("%d", &n);

    int temp = n, digits = 0;
    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }

    if (reverse(n, digits) == n) {
        printf("%d is Palindrome\n", n);
    } else {
        printf("%d is not Palindrome\n", n);
    }

    return 0;
}
