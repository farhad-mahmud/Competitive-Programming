#include <stdio.h>
#include <math.h>

int main() {
    int a, b;
    int count = 0;

    while (1) {
        printf("Enter two integers (separated by a space): ");
        scanf("%d %d", &a, &b);

        if (a == 0 && b == 0) {
            break;  // Exit the loop if a and b are both zero
        }

        count = 0;  // Reset the count for each iteration

        for (int i = a; i <= b; i++) {
            int square = i * i;
            if (square == (int) sqrt(square)) {
                count++;
            }
        }

        printf("Count: %d\n", count);
    }

    return 0;
}
