#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, lastStart = 0;

    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);
    if (name[len - 1] == '\n') name[len - 1] = '\0';

    printf("Abbreviation: ");

    printf("%c. ", name[0]);

    for (i = 1; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            if (name[i + 1] != '\0') {
                lastStart = i + 1;
                printf("%c. ", name[i + 1]);
            }
        }
    }

    printf("%s", &name[lastStart]);

    return 0;
}
