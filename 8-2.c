#include <stdio.h>
#include <string.h>

struct Customer {
    int acc;
    char name[50];
    float bal;
};

void printLowBalance(struct Customer c[], int n) {
    int i;
    printf("\nCustomers with balance below 100:\n");
    for (i = 0; i < n; i++) {
        if (c[i].bal < 100) {
            printf("%d  %s\n", c[i].acc, c[i].name);
        }
    }
}

void updateBalance(struct Customer c[], int n) {
    int acc, code, i;
    float amt;

    printf("\nEnter Account Number: ");
    scanf("%d", &acc);

    printf("Enter Amount: ");
    scanf("%f", &amt);

    printf("Enter Code (1 deposit, 0 withdrawal): ");
    scanf("%d", &code);

    for (i = 0; i < n; i++) {
        if (c[i].acc == acc) {
            if (code == 1) {
                c[i].bal += amt;
                printf("New balance = %.2f\n", c[i].bal);
            } else {
                if (c[i].bal < amt) {
                    printf("The balance is insufficient for the specified withdrawal\n");
                } else {
                    c[i].bal -= amt;
                    printf("New balance = %.2f\n", c[i].bal);
                }
            }
            return;
        }
    }

    printf("Account not found\n");
}

int main() {
    struct Customer c[10];
    int i;

    printf("Enter details of 10 customers:\n");
    for (i = 0; i < 10; i++) {
        printf("\nCustomer %d:\n", i + 1);

        printf("Account Number: ");
        scanf("%d", &c[i].acc);
        getchar();

        printf("Name: ");
        fgets(c[i].name, 50, stdin);
        c[i].name[strcspn(c[i].name, "\n")] = '\0';

        printf("Balance: ");
        scanf("%f", &c[i].bal);
    }

    printLowBalance(c, 10);

    updateBalance(c, 10);

    return 0;
}
