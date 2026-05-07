#include <stdio.h>

int main() {
    const int OSSZEG = 90;
    const long long SZORZAT = 996300;

    
    for (int a = 1; a <= 45; ++a) {
        if (SZORZAT % a != 0) continue;

        for (int b = a + 1; b <= 45; ++b) {
            if (SZORZAT % ( (long long)a * b ) != 0) continue;
            if (a + b > OSSZEG) break;

            for (int c = b + 1; c <= 45; ++c) {
                if (SZORZAT % ( (long long)a * b * c ) != 0) continue;
                if (a + b + c > OSSZEG) break;

                for (int d = c + 1; d <= 45; ++d) {
                    if (SZORZAT % ( (long long)a * b * c * d ) != 0) continue;
                    if (a + b + c + d > OSSZEG) break;

                    for (int e = d + 1; e <= 45; ++e) {
                        if (SZORZAT % ( (long long)a * b * c * d * e ) != 0) continue;
                        
                        int f = OSSZEG - (a + b + c + d + e);
                        
                        
                        if (f > e && f <= 45) {
                            if ((long long)a * b * c * d * e * f == SZORZAT) {
                                printf("A nyeroszamok: %d, %d, %d, %d, %d, %d\n", a, b, c, d, e, f);
                                return 0; 
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}