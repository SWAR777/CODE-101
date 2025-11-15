#include <stdio.h>

int main() {
    int i, j, prime, sum = 0;
    for (i = 2; i <= 500; i++) {
        prime = 1;
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) 
                prime = 0;
        }
        if (prime) 
            sum += i;
    }
    printf("Sum = %d", sum);
    return 0;
}
