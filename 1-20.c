#include <stdio.h>

int main() {
    float h, l, a;
    printf("Enter height and base: ");
    scanf("%f %f", &h, &l);
    a = h * l / 2;
    printf("Area = %.2f", a);
    return 0;
}
