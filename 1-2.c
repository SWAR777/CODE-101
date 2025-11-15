#include <stdio.h>

int main() {
    int x, y, diff;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    diff = x - y;
    printf("Difference = %d", diff);
    return 0;
}
