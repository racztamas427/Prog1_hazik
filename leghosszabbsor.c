#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


void generalas(int n, int min, int max) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        int hossz = rand() % (max - min + 1) + min;
        for (int j = 0; j < hossz; j++) {
            putchar((rand() % (126 - 33 + 1)) + 33);
        }
        putchar('\n');
    }
}


void elemzes(const char *fajlnev) {
    FILE *fp = fopen(fajlnev, "r");
    if (!fp) {
        fprintf(stderr, "Hiba! A fajl (%s) nem nyithato meg!\n", fajlnev);
        exit(2);
    }

    int max_hossz = -1, max_sor_szama = 0;
    int akt_sor = 1, akt_hossz = 0, c;

    while ((c = fgetc(fp)) != EOF) {
        if (c == '\n') {
            if (akt_hossz > max_hossz) {
                max_hossz = akt_hossz;
                max_sor_szama = akt_sor;
            }
            akt_hossz = 0;
            akt_sor++;
        } else if (c != '\r') {
            akt_hossz++;
        }
    }
    
   
    if (akt_hossz > 0 && akt_hossz > max_hossz) {
        max_hossz = akt_hossz;
        max_sor_szama = akt_sor;
    }

    if (max_sor_szama > 0) printf("%d %d\n", max_sor_szama, max_hossz);
    fclose(fp);
}

int main(int argc, char *argv[]) {
    if (argc == 4) {
        generalas(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));
    } 
    else if (argc == 2) {

        elemzes(argv[1]);
    } 
    else {
        fprintf(stderr, "Hasznalat:\n");
        fprintf(stderr, " Generalas: %s <db> <min> <max> > fajl.txt\n", argv[0]);
        fprintf(stderr, " Elemzes:  %s <fajl.txt>\n", argv[0]);
        return 1;
    }

    return 0;
}