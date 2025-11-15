#include <stdio.h>

int main() {
    int n, t, d, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    t = n;
    while (t > 0) {
        d = t % 10;
        sum += d * d * d;
        t /= 10;
    }

    if (sum == n) 
        printf("Armstrong");
    else 
        printf("Not armstrong");
    return 0;
}
