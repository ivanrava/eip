#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Local variables declaration
    float real;

    // Input
    scanf("%f", &real);

    // Integer part
    int part_int = (int)real;

    // Output
    printf("La parte intera di %.2f e'\t %d\n",
        real, part_int);
    printf("La parte frazionaria di %.2f e'\t %.2f\n",
        real, real-part_int);
    return 0;
}
