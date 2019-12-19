#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x;
    do {
        scanf("%d", &x);
    } while (x < 1 || x > 20);

    int occ = 0, rnd;
    for(int i = 0; i < 100; i++) {
        rnd = rand() % 20 + 1;
        printf(" %d", rnd);
        if (x == rnd)
            occ++;
    }
    printf("\n\tOccorenze di %d: %d\n", x, occ);

    return 0;
}