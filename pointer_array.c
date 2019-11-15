#include <stdlib.h>
#include <stdio.h>
#define DIM 5

int main(void) {
    // Local variable declaration
    int v[DIM], *p;
    // Load array with random values
    // ...nothing interesting
    for (int i = 0; i < DIM; i++) {
        v[i] = rand() % 10;
        printf("%4d", v[i]);
    }
    printf("\n");

    // Assign pointer to array address
    p = v;
    // p begins at the first element's ADDRESS
    // loop while the ADDRESS is lower than the final array ADDRESS
    // Increment pointer ADDRESS (4 Bytes)
    for (p = &v[0]; p < v+DIM; p++)
        // Set value of the pointed element to 0
        *p = 0;
    
    // Print again: should be all 0s
    for (int i = 0; i < DIM; i++) {
        printf("%4d", v[i]);
    }

    return 0;
}