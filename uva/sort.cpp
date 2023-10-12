#include<iostream>
#include<math.h>

int main() {
    long int a, b;
    long int countt= 0;

    while (scanf("%ld %ld",&a, &b)==2) {

        if (a == 0 && b == 0) {
            break;
        }

        countt = 0;

        for (int i = a; i <= b; i++) {
            int squareRoot = (int)sqrt(i);
            if (squareRoot * squareRoot == i) {
                countt++;
            }
        }

        printf("%ld\n", countt);
    }

    return 0;
}
