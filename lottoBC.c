#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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

int benne_van(int tomb[], int n, int szam) {
    for (int i = 0; i < n; i++) {
        if (tomb[i] == szam) return 1;
    }
    return 0;
}

int main() {
    int n, also, felso;
    srand(time(NULL));

    printf("Hany db random szamot kersz? ");
    scanf("%d", &n);
    printf("Also hatar: ");
    scanf("%d", &also);
    printf("Felso hatar (zart intervallum): ");
    scanf("%d", &felso);

    
    if (n > (felso - also + 1)) {
        printf("Hiba: Nem lehet ennyi kulonbozo szamot generalni ebből az intervallumbol!\n");
        return 1;
    }

    int szamok[n];
    int generalt = 0;


    while (generalt < n) {
        int uj_szam = rand() % (felso - also + 1) + also;
        
        if (!benne_van(szamok, generalt, uj_szam)) {
            szamok[generalt] = uj_szam;
            generalt++;
        }
    }


    rendez(szamok, n);

   
    printf("\nA generalt szamok: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", szamok[i]);
    }
    printf("\n");

    return 0;
}