#include <stdio.h>
#define LEN 5

int main(void) {
    // Local variable declaration
    int nums[LEN][4], n1, n2;
    // Input loop: loading array
    for (int i = 0; i < LEN; i++) {
        printf("Inserire 2 numeri naturali nella forma n1/n2: ");
        scanf("%d/%d", &n1, &n2);
        nums[i][0] = n1;
        nums[i][1] = n2;
        nums[i][2] = n1 / n2;
        nums[i][3] = n1 % n2;
    }
    // Output loop: reading array
    for (int i = 0; i < LEN; i++) {
        printf("%d/%d = %d con resto %d\n",
            nums[i][0], nums[i][1], nums[i][2], nums[i][3]);
    }
    
    return 0;
}