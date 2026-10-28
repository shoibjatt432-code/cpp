#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1;
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial not defined");
        return 0;
    }

    for (i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial = %llu", fact);
    return 0;
}