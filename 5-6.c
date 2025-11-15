#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int i = 0;

    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    int len1 = strlen(s1);
    if (s1[len1 - 1] == '\n') s1[len1 - 1] = '\0';

    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    int len2 = strlen(s2);
    if (s2[len2 - 1] == '\n') s2[len2 - 1] = '\0';

    while (s1[i] == s2[i] && s1[i] != '\0') {
        i++;
    }

    if (s1[i] > s2[i]) printf("First string is greater");
    else if (s1[i] < s2[i]) printf("Second string is greater");
    else printf("Both strings are same");

    return 0;
}
