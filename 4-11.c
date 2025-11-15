#include <stdio.h>

int main() {
    int a[10], b[10];
    int i, n, dir;

    printf("Enter 10 values:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter shift value n: ");
    scanf("%d", &n);

    printf("Enter direction (1 for left, 2 for right): ");
    scanf("%d", &dir);

    for (i = 0; i < 10; i++) {
        b[i] = 0;
    }

    if (dir == 1) {
        for (i = 0; i < 10; i++) {
            if (i + n < 10) {
                b[i] = a[i + n];
            }
        }
    } else {
        for (i = 9; i >= 0; i--) {
            if (i - n >= 0) {
                b[i] = a[i - n];
            }
        }
    }

    printf("Shifted array:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
