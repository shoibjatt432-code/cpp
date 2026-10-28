#include <stdio.h>

int main() {
    int n, i, a[100];
    scanf("%d", &n);

    if (n < 1 || n > 100)
        return 0;

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int max = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }

    printf("Maximum = %d", max);
    return 0;
}