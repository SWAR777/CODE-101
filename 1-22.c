#include <stdio.h>

int main() {
    float g, n;
    printf("Enter gross sales: ");
    scanf("%f", &g);
    n = g - (g * 0.10);
    printf("Net Sales = %.2f", n);
    return 0;
}
    