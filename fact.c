#include <stdio.h>

/**
 * Returns the factorial of a number (recursive)
 */
int fact(int n) {
    if (n==0) {
        return 1;
    } else {
        return n*fact(n-1);
    }
}

int main(void) {
    printf("%d", fact(4));
    return 0;
}