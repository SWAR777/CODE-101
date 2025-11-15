#include <stdio.h>

int main() {
    int n = 1, count = 0;
    while (count < 10) {
        if (n % 2 != 0) {
            printf("%d ", n);
            count++;
        }
        n++;
    }
    return 0;
}
