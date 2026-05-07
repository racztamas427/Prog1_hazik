#include <stdio.h>
#include <ctype.h>


int strcmpi(const char* s1, const char* s2) {
   
    while (*s1 && *s2) {
        
        char c1 = tolower((unsigned char)*s1);
        char c2 = tolower((unsigned char)*s2);

        if (c1 != c2) {
            return (unsigned char)c1 - (unsigned char)c2;
        }
        s1++;
        s2++;
    }

    
    return (unsigned char)tolower((unsigned char)*s1) - 
           (unsigned char)tolower((unsigned char)*s2);
}

int main() {
    char s1[] = "Alma";
    char s2[] = "aLmA";
    char s3[] = "ALMAFA";

    printf("'%s' vs '%s': %d\n", s1, s2, strcmpi(s1, s2)); 
    printf("'%s' vs '%s': %d\n", s1, s3, strcmpi(s1, s3)); 

    if (strcmpi(s1, s2) == 0) {
        printf("A ket szo egyforma (case-insensitive).\n");
    }

    return 0;
}