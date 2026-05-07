#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int choice(const int n, const int tomb[]) {

    int random_index = rand() % n;

    return tomb[random_index];
}

int main() {
    srand(time(NULL));

    int szamok[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int meret = 10;

    printf("A tombbol valasztott veletlen elem: %d\n", choice(meret, szamok));
    printf("Meg egy proba: %d\n", choice(meret, szamok));

    return 0;
}