#include <stdio.h>

int main() {
    int x, p = 0, n = 0, z = 0, i;

    printf("Enter 200 values:\n");
    for (i = 0; i < 200; i++) {
        scanf("%d", &x);
        if (x > 0) p++;
        else if (x < 0) n++;
        else z++;
    }

    printf("Positive = %d\nNegative = %d\nZero = %d", p, n, z);
    return 0;
}

