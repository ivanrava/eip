#include <stdio.h>

/**
 * Returns 1 if prime number, 0 otherwise.
 */
int prime(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {
    // Local variable declaration
    int primes = 0, n;
    // Input till 0
    do {
        // Input (=> 0)
        do {
            printf("-> ");
            scanf("%d", &n);
        } while (n < 0);

        // If number > 0 and (only if > 0) prime
        if (n && prime(n))
            primes++;
    } while (n != 0);

    // Output    
    printf("Numero di primi acquisiti: %d", primes);

    return 0;
}