#include <stdio.h>

int main() {
    int magassag;

    printf("Magassag(páratlan): ");
    scanf("%d", &magassag);

    if (magassag <= 0 || magassag % 2 == 0) {
        printf("Ne legyél hülye ez nem páratlan!\n");
        return 1;
    }

    int kozep = magassag / 2;

    for (int i = 0; i <= kozep; i++) {
        for (int j = 0; j < kozep - i; j++)
            printf(" ");

        for (int j = 0; j < 2 * i + 1; j++)
            printf("*");

        printf("\n");
    }

    for (int i = kozep - 1; i >= 0; i--) {
        for (int j = 0; j < kozep - i; j++)
            printf(" ");

        for (int j = 0; j < 2 * i + 1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}