#include <stdlib.h>
#include <stdio.h>
#define DIMR 10
#define DIMC 12

void sums(int v[], int n, int *pos_sum, int *neg_sum) {
    *pos_sum = 0, *neg_sum = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] < 0) {
            *neg_sum += v[i];
        } else {
            *pos_sum += v[i];
        }
    }
}

int main(void) {
    int mat[DIMR][DIMC];
    for (int i = 0; i < DIMR; i++) {
        for (int j = 0; j < DIMC; j++) {
            mat[i][j] = rand()%101-50;
            printf("\t%d", mat[i][j]);
        }
        int pos, neg;
        sums(mat[i], DIMC, &pos, &neg);
        printf("\t|\t%d\t%d\n", pos, neg);
    }
    return 0;
}