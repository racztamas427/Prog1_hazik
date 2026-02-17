#include <stdio.h>
#include <math.h>

int main()
{
    double r;
    printf("Adja a meg kör sugarát:");
    scanf("%lf",&r);
    printf("A kör kerülete:%lf",2*r*M_PI);
    printf("\n");
    printf("A kör területe:%lf",r*r*M_PI);
    return 0;
}