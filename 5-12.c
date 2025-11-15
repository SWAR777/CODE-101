#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    int a = 0, e = 0, i1 = 0, o = 0, u = 0;
    int i;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int len = strlen(s);
    if (s[len - 1] == '\n') s[len - 1] = '\0';

    for (i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }

        if (c == 'a') a++;
        else if (c == 'e') e++;
        else if (c == 'i') i1++;
        else if (c == 'o') o++;
        else if (c == 'u') u++;
    }

    printf("a = %d\ne = %d\ni = %d\no = %d\nu = %d", a, e, i1, o, u);
    return 0;
}
    