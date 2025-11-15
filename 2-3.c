#include <stdio.h>

int main() {
    float g, a, d, n;
    printf("Enter gross salary: ");
    scanf("%f", &g);
    if(g > 10000) {
        a = g * 0.10;
        d = g * 0.03;
    } else if(g > 5000) {
        a = g * 0.07;
        d = g * 0.02;
    } else {
        a = g * 0.05;
        d = g * 0.01;
    }
    n = g + a - d;
    printf("Net Salary = %.2f", n);
    return 0;
}
