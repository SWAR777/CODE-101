#include <stdio.h>

int main() {
    float g, d, n;
    printf("Enter gross sales: ");
    scanf("%f", &g);
    if(g > 20000) d = g * 0.15;
    else if(g > 10000) d = g * 0.10;
    else d = g * 0.05;
    n = g - d;
    printf("Net Sales = %.2f", n);
    return 0;
}
