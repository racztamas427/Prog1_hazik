#include <stdio.h>

int main() {
    const int min_szam = 1;  
    const int max_szam = 99; 

    int szamok[100] = {0};  
    int szam;

    printf("Adj meg 0 végjelig egész számokat az [%d, %d] intervallumból!\n", min_szam, max_szam);

    
    while (1) {
        printf("Szám: ");
        scanf("%d", &szam);

        if (szam == 0) 
            break;

        if (szam < min_szam || szam > max_szam) {
            printf("Ez a szám kívül esik az elfogadható intervallumon!\n");
            continue;
        }

        szamok[szam] = 1; 
    }

    
    int kulonbozo_szamok = 0;
    for (int i = min_szam; i <= max_szam; i++) {
        if (szamok[i] == 1) {
            kulonbozo_szamok++;
        }
    }

    printf("\n%d db különböző szám lett megadva.\n", kulonbozo_szamok);
    printf("Ezek (növekvő sorrendben): ");

    int elso = 1; 
    for (int i = min_szam; i <= max_szam; i++) {
        if (szamok[i] == 1) {
            if (!elso)
                printf(", ");
            printf("%d", i);
            elso = 0;
        }
    }
    printf("\n");

    return 0;
}
