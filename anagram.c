#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 10
#define PERM 10

int main(void)
{
    // Local variable declaration
    char word[SIZE];
    char tmp, r1, r2;
    
    // Input
    scanf("%s", word);
    
    // Processing
    for (int i = 0; i < PERM; i++) {
        // Take 2 random positions
        r1 = rand() % strlen(word);
        r2 = rand() % strlen(word);
        // Swap chars
        tmp = word[r1];
        word[r1] = word[r2];
        word[r2] = tmp;
    }

    // Output   
    printf(word);
    return 0;
}
