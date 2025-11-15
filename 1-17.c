#include <stdio.h>

int main() {
    float l;
    printf("Enter side: ");
    scanf("%f", &l);
    printf("Area = %.2f\n", l * l);
    printf("Perimeter = %.2f", 4 * l);
    return 0;
}
