#include <stdio.h>

#define N 6


void kiir_mellekatlo(int matrix[N][N]) {
    printf("A mellekatlo elemei: ");
    for (int i = 0; i < N; i++) {
       
        printf("%d ", matrix[i][N - 1 - i]);
    }
    printf("\n");
}

int main() {
    
    int matrix[N][N];
    int ertek = 10;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = ertek++;
        }
    }

    
    printf("A teljes matrix:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%2d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    
    kiir_mellekatlo(matrix);

    return 0;
}