#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("valos_szamok.txt", "r");

    
    if (fp == NULL) {
        fprintf(stderr, "Hiba! A valos_szamok.txt fajl nem talalhato!\n");
        return 1;
    }

    double osszeg = 0.0;
    double aktualis_szam;

   
    while (fscanf(fp, "%lf", &aktualis_szam) == 1) {
        osszeg += aktualis_szam;
    }

    
    fclose(fp);

    
    printf("%.20f\n", osszeg);

    return 0;
}