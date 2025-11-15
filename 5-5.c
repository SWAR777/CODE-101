#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int i;

    printf("Enter a string: ");
    fgets(s1, sizeof(s1), stdin);

    int len = strlen(s1);
    if (s1[len - 1] == '\n') s1[len - 1] = '\0';

    for (i = 0; s1[i] != '\0'; i++) {
        s2[i] = s1[i];
    }
    s2[i] = '\0';

    printf("Copied string: %s", s2);
    return 0;
}
