#include<stdio.h>
int main() {
    long long int n;
    long long int sum;

    while (scanf("%lld", &n)) {
        if (n == 0) {
            break;
        } else if (n <= 9) {
            sum = n;
        } else {
            while (n > 9) {
                sum = 0;
                while (n > 0) {
                    sum += n % 10;
                    n /= 10;
                }
                n = sum;
            }
        }
        printf("%lld\n", sum);
    }
    return 0;
}
