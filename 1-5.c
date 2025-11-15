#include <stdio.h>

int main() {
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Add = %.2f\n", a + b);
    printf("Sub = %.2f\n", a - b);
    printf("Mul = %.2f\n", a * b);
    printf("Div = %.2f\n", a / b);
    return 0;
}
