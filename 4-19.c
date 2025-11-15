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

    printf("Enter value to search: ");
    scanf("%d", &val);

    for (i = 0; i < n; i++) {
        if (a[i] == val) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Value found at position %d", i);
    } else {
        printf("Value not found");
    }

    return 0;
}
