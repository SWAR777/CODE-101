#include <stdio.h>

int main() {
    float l, b;
    printf("Enter length and breadth: ");
    scanf("%f %f", &l, &b);
    printf("Area = %.2f\n", l * b);
    printf("Perimeter = %.2f", 2 * (l + b));
    return 0;
}
