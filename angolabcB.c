#include <stdio.h>


void keszitSztringet(char tomb[]) {
    for (int i = 0; i < 26; i++) {
        tomb[i] = 'a' + i;
    }
    tomb[26] = '\0'; 
}

int main() {
    char abcSztring[27]; 
    keszitSztringet(abcSztring);

   
    printf("Az angol ábécé: %s\n", abcSztring);

    return 0;
}