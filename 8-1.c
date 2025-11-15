#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    char course[50];
    char major[50];
    char minor[50];
};

void printNames(struct Student s[], int n) {
    int i;
    printf("\nNames of all students:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", s[i].name);
    }
}

void printByRoll(struct Student s[], int n, int r) {
    int i;
    for (i = 0; i < n; i++) {
        if (s[i].roll == r) {
            printf("\nRoll: %d\nName: %s\nCourse: %s\nMajor: %s\nMinor: %s\n",
                   s[i].roll, s[i].name, s[i].course, s[i].major, s[i].minor);
            return;
        }
    }
    printf("Student not found");
}

int main() {
    struct Student s[10];
    int i, r;

    printf("Enter data of 10 students:\n");
    for (i = 0; i < 10; i++) {
        printf("\nStudent %d:\n", i + 1);

        printf("Roll: ");
        scanf("%d", &s[i].roll);
        getchar();

        printf("Name: ");
        fgets(s[i].name, 50, stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("Course: ");
        fgets(s[i].course, 50, stdin);
        s[i].course[strcspn(s[i].course, "\n")] = '\0';

        printf("Major: ");
        fgets(s[i].major, 50, stdin);
        s[i].major[strcspn(s[i].major, "\n")] = '\0';

        printf("Minor: ");
        fgets(s[i].minor, 50, stdin);
        s[i].minor[strcspn(s[i].minor, "\n")] = '\0';
    }

    printNames(s, 10);

    printf("\nEnter roll to search: ");
    scanf("%d", &r);

    printByRoll(s, 10, r);

    return 0;
}
