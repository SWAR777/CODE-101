#include <stdio.h>

int main() {
    int n, sq, t;
    printf("Enter number: ");
    scanf("%d", &n);

    sq = n * n;
    t = n;

    while (t > 0) {
        if ((t % 10) != (sq % 10)) {
            printf("Not automorphic");
            return 0;
        }
        t /= 10;
        sq /= 10;
    }

    printf("Automorphic");
    return 0;
}

