#include <stdio.h>

int main() {
    int a, b, c, max, min;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    min = a;
    if(b < min) min = b;
    if(c < min) min = c;
    printf("Largest = %d,Smallest = %d", max, min);
    return 0;
}
