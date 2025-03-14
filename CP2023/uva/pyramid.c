#include <stdio.h>

int main() {
    int row, col, n;
    n = 5;

    for (row = n; row >= 1; row--) {
        for (col = 1; col <= n - row; col++) {
            printf("   ");
        }

        for (col = 0; col < 2 * row - 1; col++) {
            printf("%2d ",  2*col + row);
        }

        printf("\n");
    }

    for (row = 2; row <= n; row++) {
        for (col = 1; col <= n - row; col++) {
            printf("   ");
        }

        for (col = 0; col < 2 * row - 1; col++) {
            printf("%2d ", 2*col + row);
        }

        printf("\n");
    }

    return 0;
}
