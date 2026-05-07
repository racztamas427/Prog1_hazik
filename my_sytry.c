#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


void my_strfry(char *s) {
    if (s == NULL) return;

    int n = strlen(s);
    if (n <= 1) return;

    for (int i = n - 1; i > 0; i--) {
        
        int j = rand() % (i + 1);

        
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main() {
    
    srand(time(NULL));

    
    char szo[] = "Debrecen";

    printf("Eredeti: %s\n", szo);

    my_strfry(szo);
    printf("Kevert 1: %s\n", szo);

    my_strfry(szo);
    printf("Kevert 2: %s\n", szo);

    return 0;
}