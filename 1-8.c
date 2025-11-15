#include <stdio.h>

int main() {
    float d;
    printf("Enter dollars: ");
    scanf("%f", &d);
    printf("Rupees = %.2f", d * 48);
    return 0;
}
