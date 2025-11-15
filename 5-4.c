#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int len = strlen(s);
    if (s[len - 1] == '\n') s[len - 1] = '\0';

    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;
        } else if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;
        }
    }

    printf("Toggle case: %s", s);
    return 0;
}
    