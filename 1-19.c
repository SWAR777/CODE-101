#include <stdio.h>

int main() {
    float r, a;
    printf("Enter radius: ");
    scanf("%f", &r);
    a = (22.0/7.0) * r * r;
    printf("Area = %.2f", a);
    return 0;
}
