#include <stdio.h>
#include <stdlib.h>

int get_number_of_lines(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        return -1; 
    }

    int sorok_szama = 0;
    int ch;
    int utolso_karakter = '\n'; 

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') {
            sorok_szama++;
        }
        utolso_karakter = ch;
    }

    
    if (utolso_karakter != '\n') {
        sorok_szama++;
    }

    fclose(fp);
    return sorok_szama;
}

int main(int argc, char *argv[]) {
    
    if (argc < 2) {
        fprintf(stderr, "Hiba! Adja meg egy szoveges allomany nevet!\n");
        return 1;
    }

    
    int eredmeny = get_number_of_lines(argv[1]);

    
    if (eredmeny == -1) {
        fprintf(stderr, "Hiba! A %s nevu file-t nem sikerult megnyitni!\n", argv[1]);
        return 2;
    }

    
    printf("%d\n", eredmeny);

    return 0;
}