#include <stdio.h>

int main() {
    int n, i, a[100];
    scanf("%d", &n);

    if (n < 1 || n > 100)
        return 0;

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int min = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] < min)
            min = a[i];
    }

    printf("Minimum = %d", min);
    return 0;
}