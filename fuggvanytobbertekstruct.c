#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Eredmenyek {
    int min;
    int max;
    double atlag;
};

struct Eredmenyek statisztika(int tomb[], int meret) {
    struct Eredmenyek res;
    int osszeg = 0;

    
    res.min = tomb[0];
    res.max = tomb[0];
    osszeg = tomb[0];

    for (int i = 1; i < meret; i++) {
        if (tomb[i] < res.min) res.min = tomb[i];
        if (tomb[i] > res.max) res.max = tomb[i];
        osszeg += tomb[i];
    }

    res.atlag = (double)osszeg / meret;
    return res;
}

int main() {
   
    srand(5); 

    int szamok[10];
    printf("A tomb elemei: ");
    for (int i = 0; i < 10; i++) {
        // [10, 99] közötti zárt intervallum: rand() % (max - min + 1) + min
        szamok[i] = rand() % (99 - 10 + 1) + 10;
        printf("%d%s", szamok[i], (i == 9 ? "" : ", "));
    }

    
    struct Eredmenyek kapott = statisztika(szamok, 10);

    printf("\nLegkisebb elem: %d", kapott.min);
    printf("\nLegnagyobb elem: %d", kapott.max);
    printf("\nAz elemek atlaga: %.1f\n", kapott.atlag);

    return 0;
}