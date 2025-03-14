#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ld long double
#define ull unsigned long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define pb push_back
#define ff first
#define ss second
#define all(f) f.begin(), f.end()
#define rall(f) f.rbegin(), f.rend()
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define repr(i, a, b) for (int i = (a); i >= (b); --i)
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define nl cout << '\n';

const ll MOD = 1e9 + 7;
const ll INF = 1e18;
const double PI = acos(-1);


int main()
{
    FAST_IO;

    ll t;
    cin >> t;
    while (t--)
    {
        ll n,s,m ;
        cin >> n >> s >> m ;
        ll l[n] ;
        ll r[n] ;
        for(ll i=0; i<n; i++)
        {
            cin >> l[i] >> r[i] ;
        }
        bool flag = false ;

        if(l[0] >= s)
        {
            flag = true ;
        }

        for(ll i=0; i<n-1; i++)
        {
            if(l[0] - 0 >= s)
            {
                flag = true ;

                break ;
            }
            else if (l[i+1]-r[i] >=s)
            {
                flag = true ;
                break ;
            }

        }

        if (m- (r[n-1]) >=s)
        {
            flag = true ;


        }

        //   cout << m-(r[n-1]) << endl;
        //cout<< m << endl;
        //cout << r[n-1] << endl ;
        if(flag)
        {
            yes ;
        }
        else
        {
            no ;
        }
    }

    return 0;
}

