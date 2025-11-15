#include <stdio.h>

int main() {
    float kg;
    printf("Enter kg: ");
    scanf("%f", &kg);
    printf("Grams = %.2f", kg * 1000);
    return 0;
}
