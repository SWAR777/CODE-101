#include <stdio.h>

int main() {
    float a, b, d;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    d = a / b;
    printf("Division = %.2f", d);
    return 0;
}
