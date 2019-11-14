#include <stdio.h>
#include <stdlib.h>
#define R 5
#define C 12

int main (void) {
    // Local variable declaration
    int matrix[R][C];
    int sum=0, pos=0;
    // Loading loop
    for (int i = 0; i < R; i++) {
        // ...for every row...
        for (int j = 0; j < C; j++) {
            // ...for every column in row...
            matrix[i][j] = rand() % 101 - 20;
            printf("%8d", matrix[i][j]);
        }
        printf("\n");
    }

    // Visually splits matrix and mean row
    printf("\n");

    for (int i = 0; i < C; i++) {
        // ..for every column...
        for (int j = 0; j < R; j++) {
            // ...for every row in column...
            if(matrix[j][i] > 0) {
                // Increment sum
                sum+=matrix[j][i];
                pos++;
            }
        }
        // Print column mean
        if (pos == 0)
            printf("%8s", "N/A");
        else
            printf("%8.1f", (float)sum/pos);
        // Reset accumulators
        sum=0, pos=0;
    }
    
    
    return 0;
}