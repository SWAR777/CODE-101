#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    int phy, math, chem;
    int total;
};

int main() {
    struct Student s;

    printf("Enter roll no: ");
    scanf("%d", &s.roll);
    getchar();

    printf("Enter name: ");
    fgets(s.name, 50, stdin);
    s.name[strcspn(s.name, "\n")] = '\0';

    printf("Enter physics marks: ");
    scanf("%d", &s.phy);

    printf("Enter maths marks: ");
    scanf("%d", &s.math);

    printf("Enter chemistry marks: ");
    scanf("%d", &s.chem);

    s.total = s.phy + s.math + s.chem;

    printf("\nRoll: %d\nName: %s\nPhysics: %d\nMaths: %d\nChemistry: %d\nTotal: %d",
           s.roll, s.name, s.phy, s.math, s.chem, s.total);

    return 0;
}
