#include <stdio.h>

int main() {
    int i, boys = 0, girls = 0;
    char c;

    printf("Enter M for boy and F for girl:\n");
    for (i = 0; i < 50; i++) {
        scanf(" %c", &c);
        if (c == 'M') boys++;
        else girls++;
    }

    printf("Boys = %d\nGirls = %d", boys, girls);
    return 0;
}
