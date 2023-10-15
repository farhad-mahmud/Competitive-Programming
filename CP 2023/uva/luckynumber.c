#include <stdio.h>

int isLuckyNumber(int number) {
    return (number == 4 || number == 7);
}

int main() {
    long long int n;
    scanf("%lld", &n);

    int count = 0;
    while (n != 0) {
        int lastDigit = n % 10;
        if (lastDigit == 4 || lastDigit == 7) {
            count++;
        }
        n /= 10;
    }

    if (isLuckyNumber(count)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
