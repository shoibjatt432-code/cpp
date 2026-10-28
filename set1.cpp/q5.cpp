#include <stdio.h>

int main() {
    int n, temp, rem, rev = 0;
    scanf("%d", &n);

    if (n < 0) {
        printf("Not Palindrome");
        return 0;
    }

    temp = n;

    while (temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    if (n == rev)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}