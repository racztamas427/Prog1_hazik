#include <stdio.h>
#include <string.h>

int main() {
    const int max_len = 100;  
    char word[max_len];
    int max_length = 0;
    int word_count = 0;

    printf("Adj meg szavakat '*' végjelig!\n");

    while (1) {
        printf("Szó: ");
        fgets(word, max_len, stdin);  

        word[strcspn(word, "\n")] = '\0';

        if (strcmp(word, "*") == 0) {
            break;
        }

        word_count++;  

        int length = strlen(word);
        if (length > max_length) {
            max_length = length;
        }
    }

    printf("\n%d db szót adtál meg. A leghosszabb szó %d karakterből áll.\n", word_count, max_length);

    return 0;
}
