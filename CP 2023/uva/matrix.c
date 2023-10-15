#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[5][5];
    int i, j;
    int row = -1;
    int col = -1;
    int row_swaps = 0;
    int col_swaps = 0;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &a[i][j]);
            if (a[i][j] == 1) {
                row = i;
                col = j;
            }
        }
    }

    if (row < 2)
        row_swaps = 2 - row;
    else if (row > 2)
        row_swaps = row - 2;


    if (col < 2)
        col_swaps = 2 - col;
    else if (col > 2)
        col_swaps = col - 2;

    int total_moves = row_swaps + col_swaps;

    printf("%d\n",total_moves);

    return 0;
}
