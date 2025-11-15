#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i = 0, j, flag = 1;

    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    int len = strlen(s);
    if (s[len - 1] == '\n') s[len - 1] = '\0';

    while (s[i] != '\0') {
        i++;
    }
    j = i - 1;

    for (i = 0; i < j; i++, j--) {
        if (s[i] != s[j]) {
            flag = 0;
            break;
        }
    }

    if (flag) printf("Palindrome");
    else printf("Not palindrome");

    return 0;
}
