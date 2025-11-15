#include <stdio.h>

int main() {
    int i, j, prime;
    for (i = 2; i <= 500; i++) {
        prime = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) 
                prime = 0;
        }
        if (prime) 
            printf("%d ", i);
    }
    return 0;
}
