#include <stdio.h>

int conta() {
    static int i = 0;
    return ++i;
}

int main(void) {
    for (int i = 0; i < 10; i++){
        printf("%d\n", conta());
    }
    
    return 0;
}