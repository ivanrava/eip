#include <stdio.h>
#include <stdlib.h>
#define DIMR 8
#define DIMC 10

void zeros(int mat[][DIMC], int n)
{
    n = n > DIMR ? DIMR : n;
    n = n > DIMC ? DIMC : n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mat[i][j] = 0;
        }
    }
}

int main(void) {
    // Local variable declaration
    int mat[DIMR][DIMC];
    // Hydration
    for (int i = 0; i < DIMR; i++) {
        for (int j = 0; j < DIMC; j++) {
            mat[i][j] = rand() % 10;
        }
    }
    // Output
    for (int i = 0; i < DIMR; i++) {
        for (int j = 0; j < DIMC; j++) {
            printf("\t%d", mat[i][j]);
        }
        printf("\n");
    }
    
    zeros(mat, 4);
    // 2nd output
    printf("\n2nd output:\n");
    for (int i = 0; i < DIMR; i++) {
        for (int j = 0; j < DIMC; j++) {
            printf("\t%d", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}