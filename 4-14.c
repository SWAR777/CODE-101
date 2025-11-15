#include <stdio.h>

int main() {
    int a[20];
    int i, n, val;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d values:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter value to insert at last: ");
    scanf("%d", &val);

    a[n] = val;
    n++;

    printf("New array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
