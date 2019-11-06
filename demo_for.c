#include <stdio.h>

int main(void) {
    // Local variable declaration
    int x, y, q;
    // Input: get 2 numbers > 0
    do {
        printf("Inserisci 2 numeri:\n");
        scanf("%d",&x);
        scanf("%d",&y);
    } while (x <= 0 || y <= 0);
    
    printf("Il quoziente intero di %d/%d: ",
        x, y);
    
    // Only algebric sum allowed
    for (q = 0; x > y; q++) {
        x-=y;
    }
    
    printf("%d", q);
    return 0;
}