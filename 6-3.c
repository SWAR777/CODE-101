#include <stdio.h>

int main() {
    int a[3][3];
    int i, j;
    int *p = &a[0][0];

    printf("Enter 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int max = *p;
    int min = *p;

    for (i = 0; i < 9; i++) {
        if (*(p + i) > max) {
            max = *(p + i);
        }
        if (*(p + i) < min) {
            min = *(p + i);
        }
    }

    printf("Largest = %d\n", max);
    printf("Smallest = %d\n", min);

    return 0;
}
