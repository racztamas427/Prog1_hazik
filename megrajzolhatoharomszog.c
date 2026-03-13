#include <stdio.h>


int valid_triangle(double a, double b, double c) {
    
    if (a <= 0 || b <= 0 || c <= 0) {
        return 0; 
    }

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        return 1; 
    } else {
        return 0; 

    }
}

int main() {
    double oldal_a, oldal_b, oldal_c;

    printf("Adja meg a harom oldal hosszat: ");
    
   
   scanf("%lf %lf %lf", &oldal_a, &oldal_b, &oldal_c) ;
    
    if (valid_triangle(oldal_a, oldal_b, oldal_c)) {
        printf("\nA(z) %.f, %.f es %.f oldalakkal a haromszog megszerkesztheto.\n",oldal_a, oldal_b, oldal_c);
    } else {
        printf("Sajnos a megadott oldalakkal nem szerkesztheto meg haromszog.\n");
    }

    return 0;
}

