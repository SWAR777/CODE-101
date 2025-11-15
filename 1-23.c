#include <stdio.h>

int main() {
    float a, b, c, t, avg;
    printf("Enter marks: ");
    scanf("%f %f %f", &a, &b, &c);
    t = a + b + c;
    avg = t / 3;
    printf("Total = %.2f\n", t);
    printf("Average = %.2f", avg);
    return 0;
}
