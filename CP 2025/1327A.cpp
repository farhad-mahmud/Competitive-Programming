#include <bits/stdc++.h>

using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define yes cout << "YES\n";
#define no cout << "NO\n";

int main() {
    FAST_IO;

    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;

        if (n >= k * k && (n % 2 == k % 2)) {
            yes;
        } else {
            no;
        }
    }

    return 0;
}
