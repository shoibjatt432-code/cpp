#include <stdio.h>

int main() {
    int n, a[100], key, i;
    scanf("%d", &n);

    if (n < 1 || n > 100)
        return 0;

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("Found at index %d", i);
            return 0;
        }
    }

    printf("Not Found");
    return 0;
}