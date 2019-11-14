#include <stdio.h>
#include <stdlib.h>
#define R 5
#define C 12

int main (void) {
    // Local variable declaration
    int matrix[R][C];
    int sum=0;
    // Loading loop
    for (int i = 0; i < R; i++) {
        // ...for every row...
        for (int j = 0; j < C; j++) {
            // ...for every column in row...
            matrix[i][j] = rand() % 81 - 40;
            printf("%4d", matrix[i][j]);
            // Increment sum
            sum+=matrix[i][j];
        }
        // Print sum value
        printf(" |%4d\n", sum);
        // Reset row sum value
        sum=0;
    }
    
    return 0;
}