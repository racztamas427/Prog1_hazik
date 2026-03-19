#include <stdio.h>

void line(char c, int length) {
    for (int i = 0; i < length; i++) {
        putchar(c);
    }
    putchar('\n'); 
}

int main() {
    char character;
    int length;

    printf("Adj meg egy karaktert: ");
    scanf(" %c", &character);

    printf("Add meg a vonal hosszát: ");
    scanf("%d", &length);

    printf("hello\n");
    line(character, length);
    printf("world\n");

    return 0;
}
