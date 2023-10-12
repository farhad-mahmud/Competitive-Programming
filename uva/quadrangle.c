#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t > 0) {
           int a,b,c,d;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        if (a == b && b == c && c == d && d == a ) {
            printf("square\n");
        }
        else if ((a==c && b==d)||( a==b&& c==d) || (a==d && b==c)) {
            printf("rectangle\n");
        }
        else if ((a + b + c) >= d && (b + c + d) >= a && (c + d + a) >= b && (d + a + b) >= c) {
            printf("quadrangle\n");
        }
        else {
            printf("banana\n");
        }

        t--;
    }
    return 0;
}
