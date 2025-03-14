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


int main() {
    FAST_IO;

    int t;
    cin >> t;
    while (t--) {
                   int n ;
                   cin >> n ;
                   char col[2][n] ;
                   for(int i=0;i<2;i++)
                   {
                       for(int j=0;j<n;j++)
                       {
                            cin >> col[i][j] ;
                       }
                   }
                   int c1 =0,c2= 0;
                    for(int j=0;j<n;j++)
                       {
                           if(col[0][j] == col[1][j])
                           {
                               c1++ ;
                           }
                           else if(col[0][j] == 'B' && col[1][j] == 'G' || col[0][j] == 'G'  && col[1][j]=='B')
                           {
                               c2++ ;
                           }
                       }


                  // cout << c1 << c2 << endl;

                   if (c1+c2 == n)
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

