#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Local variables declaration
    int n1, n2;

    // Input
    printf("Inserisci due numeri naturali in questa forma: n1/n2: ");
    scanf("%d/%d", &n1, &n2);

    // Output
    // Check for division by zero
    if (n2 != 0) {
        printf("Consideriamo la divisione %d/%d:\n",
            n1, n2);
        printf("\tQuoziente intero:\t %d\n",
            n1 / n2);
        printf("\tResto:\t\t\t %d\n",
            n1 % n2);
        printf("\tQuoziente reale:\t %.7f\n",
            (float)n1 / n2);
    }
    else printf("Impossibile dividere per 0");
    
    return 0;
}
