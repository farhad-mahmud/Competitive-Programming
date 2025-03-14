#include <bits/stdc++.h>
using namespace std;

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

void solve(int a, int b, int c) {
    int A, B, C;

    int max_b_c = max(b, c);
    int max_a_c = max(a, c);
    int max_a_b = max(a, b);

    if (a > max_b_c)
        A = 0;
    else
        A = max_b_c - a + 1;

    if (b > max_a_c)
        B = 0;
    else
        B = max_a_c - b + 1;

    if (c > max_a_b)
        C = 0;
    else
        C = max_a_b - c + 1;

    cout << A << " " << B << " " << C << "\n";
}

int main() {
    FAST_IO;

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        solve(a, b, c);
    }

    return 0;
}
