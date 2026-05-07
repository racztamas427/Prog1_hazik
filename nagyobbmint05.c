#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *be = fopen("in.txt", "r");
    if (be == NULL) {
        fprintf(stderr, "Hiba: Az in.txt nem nyithato meg!\n");
        return 1;
    }
    printf("# in.txt sikeresen megnyitva\n");

    FILE *ki = fopen("out.txt", "w");
    if (ki == NULL) {
        fprintf(stderr, "Hiba: Az out.txt nem hozhato letre!\n");
        fclose(be);
        return 1;
    }

    printf("# 0,5-nel nagyobb szamok szurese...\n");

    double aktualis;
    int db = 0;

    
    while (fscanf(be, "%lf", &aktualis) == 1) {
        if (aktualis > 0.5) {
            fprintf(ki, "%f\n", aktualis);
            db++;
        }
    }

    printf("# szures vege\n");

    fclose(be);
    fclose(ki);
    printf("# out.txt bezarva\n");

    printf("# out.txt-be kiirt szamok mennyisege: %d db\n", db);

    return 0;
}