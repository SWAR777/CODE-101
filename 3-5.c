#include <stdio.h>

int main() {
    int n, count = 0, x = 1;
    printf("Enter n value: ");
    scanf("%d", &n);

    while (count < n) {
        if (x % 2 != 0) {
            printf("%d ", x);
            count++;
        }
        x++;
    }
    return 0;
}

