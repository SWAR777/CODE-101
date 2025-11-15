#include <stdio.h>

int main() {
    int x, max, min, i;

    printf("Enter number: ");
    scanf("%d", &x);
    max = min = x;

    for (i = 1; i < 100; i++) {
        printf("Enter number: ");
        scanf("%d", &x);

        if (x > max) max = x;
        if (x < min) min = x;
    }

    printf("Largest = %d\nSmallest = %d", max, min);
    return 0;
}
