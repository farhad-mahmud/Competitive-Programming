#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    FAST_IO;

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;

        ll squares = sqrt(n);
        ll cubes = cbrt(n);
        ll square_cube = sqrt(cbrt(n));

        ll result = squares + cubes - square_cube ;
        cout << result << endl;
    }

    return 0;
}
