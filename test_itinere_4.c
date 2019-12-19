#include <stdio.h>
#define SIZE 5

typedef struct {
    int d, m, y;
} Data;

int datacmp(Data d1, Data d2)
{
    if (d1.y < d2.y ||
        (d1.y == d2.y && d1.m < d2.m) ||
        (d1.y == d2.y && d1.m == d2.m && d1.d < d2.d))
        return 1;
    else
        return 0;
}

int numprevious(Data date[], int n, Data ref)
{
    int acc = 0;
    for (int i=0; i<n; i++) {
        if(datacmp(date[i], ref))
            acc++;
    }
    return acc;
}

int main(void)
{
    Data date[SIZE];
    for (int i=0; i<SIZE; i++) {
        printf("Inserisci una data del calendario [dd/mm/yyyy]: ");
        scanf("%d/%d/%d", &date[i].d, &date[i].m, &date[i].y);
    }
    printf("Numero di date che precedono l'ultima data: %d", numprevious(date, SIZE, date[SIZE-1]));
    return 0;
}