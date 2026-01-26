
#include <bits/stdc++.h>
using namespace std;

#define Fast_IO ios::sync_with_stdio(false); cin.tie(nullptr);
#define int int64_t

const int N = 100000;

int spf[N] ;
void sieve() {

    for (int i = 2; i < N; i++) {
        spf[i] = i;
    }
    for (int i = 2; i < N; i++) {
        if (spf[i] == i) {
            for (int j = i; j < N; j += i) {
                spf[j] = min(spf[j], i);
            }
        }
    }

}

void testCase() {
    int n;
    cin >> n;

    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) cin >> a[i];

    vector<int> hash(N + 1, 0);
    for (int i = 1; i <= n; i++){
        hash[a[i]]++;
    }

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            cout << (hash[1] ? 1 : -1) << ' ';
            continue;
        }

        if (hash[i]) {
            cout << 1 << ' ';
            continue;
        }

        int x = i, cnt = 0;
        bool ok = true;

        while (x > 1) {
            int p = spf[x];
            if (!hash[p]) {
                ok = false;
                break;
            }
            while (x % p == 0) {
                x /= p;
                cnt++;
            }
        }

        if(ok){
             cout << cnt << ' ' ;
        }
        else{
              cout << -1 << ' ' ;
        }
    }
    cout << '\n';
}

int32_t main() {
    Fast_IO
    sieve();
    int t;
    cin >> t;
    while (t--) testCase();
}
