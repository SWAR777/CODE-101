#include <stdio.h>

int main() {
    float r;
    printf("Enter rupees: ");
    scanf("%f", &r);
    printf("Dollars = %.2f", r / 48);
    return 0;
}
