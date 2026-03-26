#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, alsó_határ, felső_határ;

    
    printf("Hány db random számot kérsz? ");
    scanf("%d", &n);
    printf("Alsó határ: ");
    scanf("%d", &alsó_határ);
    printf("Felső határ (zárt intervallum): ");
    scanf("%d", &felső_határ);

    
    int random_számok[n];  

    
    for (int i = 0; i < n; i++) {
        random_számok[i] = rand() % (felső_határ - alsó_határ + 1) + alsó_határ;
    }

    printf("A generált számok: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", random_számok[i]);
    }
    printf("\n");

    return 0;
}
