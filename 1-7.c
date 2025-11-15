#include <stdio.h>

int main() {
    int m;
    printf("Enter minutes: ");
    scanf("%d", &m);
    printf("Hours = %.2f", m / 60.0);
    return 0;
}
