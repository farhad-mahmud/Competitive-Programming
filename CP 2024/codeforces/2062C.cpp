#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long > a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        long long int max_sum = 0 ;
        for(int i=0;i<n;i++)
        {
              max_sum += a[i] ;
        }


        while (n > 1) {
            reverse(a.begin(), a.end());

            vector<long long> diff;
            for (int i = 1; i < n; ++i) {
                diff.push_back(a[i] - a[i - 1]);
            }

            a = diff;
            n = a.size();

             long long int current_sum = 0 ;
             for(int i=0;i<n;i++)
             {
                  current_sum += a[i] ;
             }

            max_sum = max(max_sum, current_sum);
        }

        cout << max_sum << endl;
    }

    return 0;
}
