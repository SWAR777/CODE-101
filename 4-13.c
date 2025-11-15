#include <stdio.h>

int main() {
    int a[20];
    int i, n, pos, val;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d values:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter position to insert at (0 to %d): ", n);
    scanf("%d", &pos);

    printf("Enter value to insert: ");
    scanf("%d", &val);

    for (i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }
    a[pos] = val;
    n++;

    printf("New array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
