#include <stdio.h>

int main() {
    int n, a[100], i, temp;
    scanf("%d", &n);

    if (n < 1 || n > 100)
        return 0;

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n / 2; i++) {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    printf("Reversed Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}