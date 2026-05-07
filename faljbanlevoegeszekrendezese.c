#include <stdio.h>
#include <stdlib.h>

void rendez(int tomb[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (tomb[j] > tomb[j + 1]) {
                temp = tomb[j];
                tomb[j] = tomb[j + 1];
                tomb[j + 1] = temp;
            }
        }
    }
}

int main(int argc, char *argv[]) {
    
    if (argc < 2) {
        fprintf(stderr, "Hiba! Adja meg a fajl nevet argumentumkent!\n");
        return 1;
    }

   
    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL) {
        fprintf(stderr, "Hiba! Nem sikerult megnyitni a fajlt: %s\n", argv[1]);
        return 2;
    }

    int szamok[1000]; 
    int db = 0;

    
    while (db < 1000 && fscanf(fp, "%d", &szamok[db]) == 1) {
        db++;
    }
    fclose(fp);

    
    rendez(szamok, db);

    
    for (int i = 0; i < db; i++) {
        printf("%d\n", szamok[i]);
    }

    return 0;
}