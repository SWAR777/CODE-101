#include <stdio.h>

int main() {
    int a[20];
    int i, n, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d values:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    for (i = pos; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;

    printf("New array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}

