#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void elemezTomb(int tomb[], int meret, int *min, int *max, double *atlag) {
    *min = tomb[0];
    *max = tomb[0];
    int osszeg = 0;

    for (int i = 0; i < meret; i++) {
        if (tomb[i] < *min) *min = tomb[i];
        if (tomb[i] > *max) *max = tomb[i];
        osszeg += tomb[i];
    }

    *atlag = (double)osszeg / meret;
}

int main() {
    
    srand(time(NULL)); 

    int szamok[10];
    int min, max;
    double atlag;

    
    printf("A tomb elemei: ");
    for (int i = 0; i < 10; i++) {
        szamok[i] = rand() % 90 + 10; 
        printf("%d%s", szamok[i], (i == 9 ? "" : ", "));
    }
    printf("\n");

    
    elemezTomb(szamok, 10, &min, &max, &atlag);

    
    printf("Legkisebb elem: %d\n", min);
    printf("Legnagyobb elem: %d\n", max);
    printf("Az elemek atlaga: %.1f\n", atlag);

    return 0;
}