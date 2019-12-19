#include <stdio.h>

void potenzialo(int v[], int n)
{
    int pow;
    for (int i=0; i<n; i++) {
        pow = 1;
        for (int j=0; j<v[i]; j++) {
            pow *= 2;
        }
        printf("\t%5d - %-10d\n", v[i], pow);
    }
}

int main(void)
{
    int v[5];
    for(int i=0; i<5; i++) {
        scanf("%d", &v[i]);
    }
    potenzialo(v, 5);
    return 0;
}