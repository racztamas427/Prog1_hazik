#include <stdio.h>

double fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;

    double a = 0, b = 1, c;

    for (int i = 2; i <= n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main() {
    for (int i = 0; i < 100; i++) {
        printf("%.0f\n", fibonacci(i));
    }

    return 0;
}