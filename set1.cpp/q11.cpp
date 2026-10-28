#include <stdio.h>

int main() {
    int n, a[100], key, i, count = 0;
    scanf("%d", &n);

    if (n < 1 || n > 100)
        return 0;

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key)
            count++;
    }

    printf("Occurrences = %d", count);
    return 0;
}