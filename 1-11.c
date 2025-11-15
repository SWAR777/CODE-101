#include <stdio.h>

int main() {
    float g;
    printf("Enter grams: ");
    scanf("%f", &g);
    printf("Kg = %.3f", g / 1000);
    return 0;
}
