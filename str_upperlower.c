#include <stdio.h>
#include <string.h>
#define DIM 10

int main(void) {
    // Local variable declaration
    char input[DIM];
    // Input
    scanf("%s", input);
    // Processing
    for (int i = 0; i < strlen(input); i++) {
        if (input[i] >= 65 && input[i] <= 90) {
            // UPPERCASE -> lowercase
            input[i] += 32;
        } else if (input[i] >= 97 && input[i] <= 122) {
            // lowercase -> UPPERCASE
            input[i] -= 32;
        }
        // Other chars. Do nothing
    }
    // Output
    printf("%s", input);
    return 0;
}