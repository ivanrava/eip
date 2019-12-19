#include <stdio.h>

int divisori(int n)
{
    int acc = 0;
    for(int i=1; i<=n; i++) {
        if (n % i == 0)
            acc++;
    }
    return acc;
}

int main(void)
{
    int x;
    for (int i=0; i<10; i++) {
        printf("---------> ");
        scanf("%d", &x);
        printf("-Divisori: %d\n", divisori(x));
    }
    return 0;
}