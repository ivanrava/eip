#include <stdlib.h>
#include <stdio.h>
#define DIMR 10
#define DIMC 12

void sums(int v[], int n, int *pos_sum, int *neg_sum) {
    int pos = 0, neg = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] < 0) {
            neg += v[i];
        } else {
            pos += v[i];
        }
    }
    *pos_sum = pos;
    *neg_sum = neg;
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