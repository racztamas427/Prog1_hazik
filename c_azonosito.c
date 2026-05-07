#include <stdio.h>
#include <string.h>
#include <ctype.h>


int is_valid_c_identifier(const char* input) {
    int hossz = strlen(input);

    
    if (hossz == 0) {
        return 0;
    }

    
    if (!(isalpha(input[0]) || input[0] == '_')) {
        return 0;
    }

    
    for (int i = 1; i < hossz; i++) {
        if (!(isalnum(input[i]) || input[i] == '_')) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char sor[256];

    printf("Adj meg sztringeket '*' vegjelig!\n");

    while (1) {
        printf("\nInput: ");
        
        
        if (fgets(sor, sizeof(sor), stdin) == NULL) {
            break;
        }

        
        sor[strcspn(sor, "\r\n")] = '\0';

        
        if (strcmp(sor, "*") == 0) {
            break;
        }

        
        if (is_valid_c_identifier(sor)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}