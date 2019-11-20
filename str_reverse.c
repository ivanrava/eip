#include <string.h>
#include <stdio.h>
#define SIZE 21

int main(void)
{
    // Local variable declaration
    char word[SIZE], tmp;
    // Input
    scanf("%20s", word);
    // Elaboration
    int len = strlen(word);
    for (int i = 0; i < len/2; i++) {
        // Swap
        tmp = word[i];
        word[i] = word[len-1-i];
        word[len-1-i] = tmp;
    }
    // Output
    printf(word);
    return 0;
}