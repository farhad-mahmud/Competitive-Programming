#include <stdio.h>

int main() {
    int n, i, j, sum;
    scanf("%d", &n);

    int vectors[n][3];
    for (i = 0; i < n; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &vectors[i][j]);
        }
    }

    int isSumZero = 1;
    for (j = 0; j < 3; j++) {
        sum = 0;
        for (i = 0; i < n; i++) {
            sum += vectors[i][j];
        }
        if (sum != 0) {
            isSumZero = 0;
            break;
        }
    }

    if (isSumZero) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
