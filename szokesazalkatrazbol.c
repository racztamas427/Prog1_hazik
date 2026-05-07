#include <stdio.h>
#include <stdbool.h>

#define CELLAK_SZAMA 600

int main() {
   
    bool cellak[CELLAK_SZAMA + 1]; 

    
    for (int i = 1; i <= CELLAK_SZAMA; i++) {
        cellak[i] = false;
    }

   
    for (int lepes = 1; lepes <= CELLAK_SZAMA; lepes++) {
       
        for (int j = lepes; j <= CELLAK_SZAMA; j += lepes) {
            cellak[j] = !cellak[j]; // Megfordítjuk az állapotot
        }
    }

   
    printf("A szabadon engedett eliteltek cellai:\n");
    bool elso = true;
    for (int i = 1; i <= CELLAK_SZAMA; i++) {
        if (cellak[i]) {
            if (!elso) printf(", ");
            printf("%d", i);
            elso = false;
        }
    }
    printf("\n\n");

    
    printf("Onellenorzeshez (szamok osszevonva):\n");
    for (int i = 1; i <= CELLAK_SZAMA; i++) {
        if (cellak[i]) {
            printf("%d", i);
        }
    }
    printf("\n");

    return 0;
}