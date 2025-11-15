#include <stdio.h>

int main() {
    float g, a, d, n;
    printf("Enter gross salary: ");
    scanf("%f", &g);
    a = g * 0.10;
    d = g * 0.03;
    n = g + a - d;
    printf("Net Salary = %.2f", n);
    return 0;
}
