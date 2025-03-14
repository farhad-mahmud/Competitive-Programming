#include<iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;


    long long odd_count = (n + 1) / 2;
    long long even_count = n / 2;


    long long odd_sum = odd_count * odd_count;
    long long even_sum = even_count * (even_count + 1);


    long long ans = even_sum - odd_sum;

    cout << ans << endl;

    return 0;
}
