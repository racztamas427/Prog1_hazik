#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void shuffle_str(char *s) {
    int n = strlen(s);
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main() {
    srand(time(NULL));

    // Definíciók
    char kisbetuk[] = "abcdefghijklmnopqrstuvwxyz";
    char nagybetuk[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char szamok[] = "0123456789";
    char specialis[] = ".,;'";
    
    char jelszo[13]; 
    int index = 0;


    jelszo[index++] = kisbetuk[rand() % 26];
    jelszo[index++] = nagybetuk[rand() % 26];
    jelszo[index++] = szamok[rand() % 10];
    jelszo[index++] = specialis[rand() % 4];

    int hossz = (rand() % 5) + 8; // 8, 9, 10, 11 vagy 12
    char osszes[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.,;'";
    int osszes_meret = strlen(osszes);

    while (index < hossz) {
        jelszo[index++] = osszes[rand() % osszes_meret];
    }
    jelszo[index] = '\0'; 

    
    shuffle_str(jelszo);

    printf("%s\n", jelszo);

    return 0;
}