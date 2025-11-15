#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(a > b)
        printf("Largest = %d,Smallest = %d", a, b);
    else
        printf("Largest = %d,Smallest = %d", b, a);
    return 0;
}
