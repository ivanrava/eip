#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Variables declaration
    int n1, n2;

    // Input
    scanf("%d", &n1);
    scanf("%d", &n2);

    // Output
    printf("Consideriamo la divisione tra %d e %d:\n",
        n1, n2);
    printf("\tQuoziente intero:\t %d\n",
        n1 / n2);
    printf("\tResto:\t\t\t %d\n",
        n1 % n2);
    printf("\tQuoziente reale:\t %.7f\n",
        (float)n1 / n2);
    return 0;
}
