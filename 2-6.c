#include <stdio.h>

int main() {
    float a, b, c, t, avg;
    printf("Enter marks: ");
    scanf("%f %f %f", &a, &b, &c);
    t = a + b + c;
    avg = t / 3;
if(a < 35 || b < 35 || c < 35)
    printf("Total = %.2f\nAverage = %.2f\nFail", t, avg);
else if(avg >= 70)
    printf("Total = %.2f\nAverage = %.2f\nDistinction", t, avg);
else if(avg >= 60)
    printf("Total = %.2f\nAverage = %.2f\nFirst", t, avg);
else if(avg >= 50)
    printf("Total = %.2f\nAverage = %.2f\nSecond", t, avg);
else if(avg >= 35)
    printf("Total = %.2f\nAverage = %.2f\nThird class", t, avg);
else
    printf("Total = %.2f\nAverage = %.2f\nFail", t, avg);
    return 0;
}
