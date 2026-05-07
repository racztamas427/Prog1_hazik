#include <stdio.h>
#include <stdlib.h>


int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Hiba! Adja meg a fajl nevet!\n");
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");
    if (fp == NULL) {
        fprintf(stderr, "Hiba! Nem sikerult megnyitni: %s\n", argv[1]);
        return 2;
    }

   
    int max_db = 2000000;
    int *szamok = malloc(max_db * sizeof(int));
    if (szamok == NULL) {
        fprintf(stderr, "Hiba! Nincs eleg memoria!\n");
        fclose(fp);
        return 3;
    }

    int db = 0;
    while (db < max_db && fscanf(fp, "%d", &szamok[db]) == 1) {
        db++;
    }
    fclose(fp);

    
    qsort(szamok, db, sizeof(int), compare);

    
    for (int i = 0; i < db; i++) {
        printf("%d\n", szamok[i]);
    }

   
    free(szamok);

    return 0;
}