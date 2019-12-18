#include <stdio.h>
#define SIZE 10

int divisori(int n)
{
    int acc = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            acc++;
        }
    }
    return acc;
}

int main(void)
{
    int n = 0;
    for (int i = 0; i < SIZE; i++)
    {
        printf("Inserisci un numero: ");
        scanf("%d", &n);
        printf("\t%d\n", divisori(n));
    }
    
    return 0;
}