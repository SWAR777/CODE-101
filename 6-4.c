#include <stdio.h>
#include <string.h>

int main() {
    char books[3][50];
    char *p[3];
    int i;

    for (i = 0; i < 3; i++) {
        p[i] = books[i];
    }

    printf("Enter 3 book names:\n");
    for (i = 0; i < 3; i++) {
        fgets(p[i], 50, stdin);
        int len = strlen(p[i]);
        if (p[i][len - 1] == '\n') p[i][len - 1] = '\0';
    }

    printf("\nBooks entered:\n");
    for (i = 0; i < 3; i++) {
        printf("%s\n", p[i]);
    }

    return 0;
}
