#include <stdio.h>

int main() {
    float b;
    printf("Enter bytes: ");
    scanf("%f", &b);
    printf("KB = %.4f\n", b / 1024);
    printf("MB = %.4f\n", b / (1024 * 1024));
    printf("GB = %.4f", b / (1024 * 1024 * 1024));
    return 0;
}
