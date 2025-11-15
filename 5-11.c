#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int len = strlen(s);
    if (s[len - 1] == '\n') s[len - 1] = '\0';

    while (s[i] != '\0') {
        i++;
    }

    i--;

    while (i >= 0) {
        printf("%c\n", s[i]);
        i--;
    }

    return 0;
}
