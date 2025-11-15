#include <stdio.h>
#include <string.h>

struct Cricketer {
    char name[50];
    int age;
    int matches;
    float avg;
};

int main() {
    struct Cricketer c[10], temp;
    int i, j;

    printf("Enter data of 10 cricketers:\n");
    for (i = 0; i < 10; i++) {
        printf("\nCricketer %d:\n", i + 1);

        printf("Name: ");
        fgets(c[i].name, 50, stdin);
        c[i].name[strcspn(c[i].name, "\n")] = '\0';

        printf("Age: ");
        scanf("%d", &c[i].age);

        printf("Matches: ");
        scanf("%d", &c[i].matches);

        printf("Average runs: ");
        scanf("%f", &c[i].avg);
        getchar();
    }

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            if (c[j].avg < c[i].avg) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    printf("\nCricketers sorted by average runs:\n");
    for (i = 0; i < 10; i++) {
        printf("%s  Age:%d  Matches:%d  Avg:%.2f\n",
               c[i].name, c[i].age, c[i].matches, c[i].avg);
    }

    return 0;
}
