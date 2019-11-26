#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

void int_div(int *quotient, int *remainder, int a, int b)
{
    *quotient = a/b;
    *remainder = a%b;
}

int main(void) {
    int v[SIZE], n, q, r;
    for (int i = 0; i < SIZE; i++) {
        v[i] = rand() % 40 + 10;
        printf("\t%d", v[i]);
    }

    printf("\nInserisci un numero: ");
    scanf("%d", &n);
    for (int i = 0; i < SIZE; i++) {
        int_div(&q, &r, v[i], n);
        printf("\t%d / %d =\t%2d with remainder %d\n", v[i], n, q, r);
    }    
    
    return 0;
}