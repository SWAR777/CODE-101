#include <stdio.h>

int main() {
    int i,a = 1,b = 5;

    for (i = 1; i <= 3; i++) {
        printf("%d %d\n", a, b);
        printf("%d %d\n", a, b);
        a++;
        b--;
    }

    return 0;
}
