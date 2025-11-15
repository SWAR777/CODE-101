#include <stdio.h>

int main() {
    int a[4][4], b[16];
    int i, j, k = 0, temp;

    printf("Enter 4x4 matrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
            b[k++] = a[i][j];
        }
    }

    for (i = 0; i < 16; i++) {
        for (j = i + 1; j < 16; j++) {
            if (b[j] < b[i]) {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (i = 0; i < 16; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int a[4][4], b[16];
    int i, j, k = 0, temp;

    printf("Enter 4x4 matrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &a[i][j]);
            b[k++] = a[i][j];
        }
    }

    for (i = 0; i < 16; i++) {
        for (j = i + 1; j < 16; j++) {
            if (b[j] < b[i]) {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (i = 0; i < 16; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
