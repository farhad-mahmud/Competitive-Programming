#include<iostream>
using namespace std;
typedef long long int ll;

void solve()
{
    ll l, r,a,d;
    cin >> l >> r;
    for (ll i = l; i <= r; i++)
    {
        for (ll j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                d = i / j;
                a = j * (d - 1);
                cout << a << " " << j << endl;
                return;
            }
        }

    }
    cout << -1 << endl;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }
    return 0;
}
