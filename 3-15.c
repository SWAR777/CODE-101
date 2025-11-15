#include <stdio.h>

int main() {
    int n, i;
    float x, sum = 0;

    printf("Enter n value: ");
    scanf("%d", &n);

    printf("Enter values:\n");
    for (i = 0; i < n; i++) {
        scanf("%f", &x);
        sum += x;
    }

    printf("Sum = %.2f\nMean = %.2f", sum, sum / n);
    return 0;
}
