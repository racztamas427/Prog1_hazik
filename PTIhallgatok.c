#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


typedef struct {
    char nev[51];
    int kor;
    char szak[10];
} Hallgato;


void kapitalizal(char *s) {
    if (s[0] != '\0') {
        s[0] = toupper((unsigned char)s[0]);
    }
}


int hasonlit_nev(const void *a, const void *b) {
    Hallgato *h1 = (Hallgato *)a;
    Hallgato *h2 = (Hallgato *)b;
    return strcmp(h1->nev, h2->nev);
}


int is_pti(const char *szak) {
    char masolat[10];
    int i = 0;
    while (szak[i]) {
        masolat[i] = toupper((unsigned char)szak[i]);
        i++;
    }
    masolat[i] = '\0';
    return strcmp(masolat, "PTI") == 0;
}

int main() {
    FILE *fp = fopen("nevek.csv", "r");
    if (!fp) {
        fprintf(stderr, "Hiba! A nevek.csv nem nyitható meg!\n");
        return 1;
    }

    Hallgato pti_hallgatok[100];
    int db = 0;
    char sor[100];

    
    while (fgets(sor, sizeof(sor), fp) != NULL) {
        char nev[51], szak[10];
        int kor;
        
        
        if (sscanf(sor, " %[^,],%d,%s", nev, &kor, szak) == 3) {
            if (is_pti(szak)) {
                kapitalizal(nev);
                strcpy(pti_hallgatok[db].nev, nev);
                pti_hallgatok[db].kor = kor;
                strcpy(pti_hallgatok[db].szak, szak);
                db++;
            }
        }
    }
    fclose(fp);

    
    qsort(pti_hallgatok, db, sizeof(Hallgato), hasonlit_nev);

    
    for (int i = 0; i < db; i++) {
        printf("%s%s", pti_hallgatok[i].nev, (i == db - 1 ? "" : ", "));
    }
    printf("\n");

    return 0;
}