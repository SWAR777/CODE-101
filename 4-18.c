#include <stdio.h>

int main() {
    int a[20];
    int i, n, val, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d values:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter value to delete: ");
    scanf("%d", &val);

    for (i = 0; i < n; i++) {
        if (a[i] == val) {
            found = 1;
            break;
        }
    }

    if (found) {
        for (int j = i; j < n - 1; j++) {
            a[j] = a[j + 1];
        }
        n--;
    }

    printf("New array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
