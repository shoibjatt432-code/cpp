#include <stdio.h>

int main() {
    int n, a[100], i;
    int largest, second;
    int found = 0;

    scanf("%d", &n);

    if (n < 2 || n > 100)
        return 0;

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    largest = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > largest)
            largest = a[i];
    }

    for (i = 0; i < n; i++) {
        if (a[i] < largest) {
            if (!found || a[i] > second) {
                second = a[i];
                found = 1;
            }
        }
    }

    if (found)
        printf("Second Largest = %d", second);
    else
        printf("No second largest distinct element");

    return 0;
}