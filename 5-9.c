#include <stdio.h>
#include <string.h>

int main() {
    char s1[200], s2[100];
    int i = 0, j = 0;

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    int len1 = strlen(s1);
    if (s1[len1 - 1] == '\n') s1[len1 - 1] = '\0';

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    int len2 = strlen(s2);
    if (s2[len2 - 1] == '\n') s2[len2 - 1] = '\0';

    while (s1[i] != '\0') {
        i++;
    }

    while (s2[j] != '\0') {
        s1[i++] = s2[j++];
    }
    s1[i] = '\0';

    printf("Concatenated string: %s", s1);
    return 0;
}
