#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n % 7 == 0)
        printf("Divisible");
    else
        printf("Not divisible");
    return 0;
}
