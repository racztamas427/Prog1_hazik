#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int *adat;      
    int meret;      
    int kapacitas;  
} DinamikusTomb;

// Dinamikus tömb inicializálása
void init(DinamikusTomb *dt, int kezdeti_kapacitas) {
    dt->adat = (int *)malloc(kezdeti_kapacitas * sizeof(int));
    dt->meret = 0;
    dt->kapacitas = kezdeti_kapacitas;
}

void hozzaad(DinamikusTomb *dt, int ertek) {
    if (dt->meret == dt->kapacitas) {
        dt->kapacitas *= 2; // Kapacitás duplázása
        dt->adat = (int *)realloc(dt->adat, dt->kapacitas * sizeof(int));
        if (dt->adat == NULL) {
            fprintf(stderr, "Hiba: Nincs elegendo memoria!\n");
            exit(3);
        }
    }
    dt->adat[dt->meret++] = ertek;
}


int hasonlit(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Hasznalat: %s <fajlnev>\n", argv[0]);
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");
    if (!fp) {
        fprintf(stderr, "Hiba: A fajl nem nyithato meg!\n");
        return 2;
    }

    DinamikusTomb tomb;
    init(&tomb, 10); // Kis kezdeti mérettel indulunk, hogy teszteljük a bővítést

    int szam;
    while (fscanf(fp, "%d", &szam) == 1) {
        hozzaad(&tomb, szam);
    }
    fclose(fp);

    qsort(tomb.adat, tomb.meret, sizeof(int), hasonlit);

   
    for (int i = 0; i < tomb.meret; i++) {
        printf("%d\n", tomb.adat[i]);
    }

    
    free(tomb.adat);

    return 0;
}