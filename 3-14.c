#include <stdio.h>

int main() {
    float x, sum = 0;
    int i;

    printf("Enter 10 values:\n");
    for (i = 0; i < 10; i++) {
        scanf("%f", &x);
        sum += x;
    }

    printf("Sum = %.2f\nMean = %.2f", sum, sum / 10);
    return 0;
}
