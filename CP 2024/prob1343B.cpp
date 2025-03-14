#include <bits/stdc++.h>
using namespace std;

#define sqr(f)        (f) * (f)
#define sz(f)         (int)f.size()
#define all(f)        (f).begin(),(f).end()
#define rall(f)       (f).rbegin(),(f).rend()
#define prec(f)       fifed<<setprecision(f)

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;


        if ((n / 2) % 2 != 0) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            vector<int> arr(n);
            int even_sum = 0, odd_sum = 0;


            for (int i = 0; i < n / 2; i++) {
                arr[i] = 2 * (i + 1);
                even_sum += arr[i];
            }


            for (int i = 0; i < n / 2 - 1; i++) {
                arr[n / 2 + i] = 2 * i + 1;
                odd_sum += arr[n / 2 + i];
            }


            arr[n - 1] = even_sum - odd_sum;


            for (int i = 0; i < n; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
