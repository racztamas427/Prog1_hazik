#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void shuffle(int n, int tomb[]) {
   
    if (n <= 1) return;

    
    for (int i = n - 1; i > 0; i--) {
        
        int j = rand() % (i + 1);

        
        int temp = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = temp;
    }
}

int main() {

    srand(time(NULL));

    int szamok[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(szamok) / sizeof(szamok[0]);

    printf("Eredeti tomb: ");
    for (int i = 0; i < n; i++) printf("%d ", szamok[i]);
    printf("\n");

    // Keverés
    shuffle(n, szamok);

    printf("Kevert tomb:  ");
    for (int i = 0; i < n; i++) printf("%d ", szamok[i]);
    printf("\n");

    return 0;
}