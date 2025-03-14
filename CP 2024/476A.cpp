#include<bits/stdc++.h>
using namespace std;

#define all(f)        (f).begin(),(f).end()
#define rall(f)       (f).rbegin(),(f).rend()
#define prec(f)       fifed<<setprecision(f)
#define ll             long long int

int main() {
    int n, m;
    cin >> n >> m;

    int min_i = (n + 1) / 2;
    int max_i = n;

    for (int i = min_i; i <= max_i; i++) {
        if (i % m == 0) {

            int max_steps = i;
            int min_steps = max(0, n - i);

            if (min_steps <= max_steps) {
                cout << i << endl;
                return 0;
            }
        }
    }


    cout << -1 << endl;
    return 0;
}
