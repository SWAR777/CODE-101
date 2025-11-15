#include <stdio.h>
#include <string.h>

int main() {
    char s[100], r[100];
    int i = 0, j;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int len = strlen(s);
    if (s[len - 1] == '\n') s[len - 1] = '\0';

    while (s[i] != '\0') {
        i++;
    }

    j = 0;
    while (i > 0) {
        r[j++] = s[--i];
    }
    r[j] = '\0';

    printf("Reversed string: %s", r);
    return 0;
}
