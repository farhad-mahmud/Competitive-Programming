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

int minimum(int a,int b,int c)
{
     int sum = a+b+c ;
    int small = min(a,min(b,c)) ;
    int big = max(a,max(b,c)) ;
    int mid = sum - (small+big) ;

     if(a== small)
     {
         return a ;
     }
     else if(b== small)
     {
         return b ;
     }
     else{
        return c ;
     }

}

int main()
{
    FAST_IO;

    int t;
    cin >> t;
    while (t--)
    {
        int a,b,c ;
        cin >> a >>b >> c ;


        for(int i=0; i<5; i++)
        {
            int increment = minimum(a,b,c) ;

            if (increment == a)
            {
                 a += 1  ;
            }
            else if(increment == b)
            {
                b += 1 ;
            }
            else{
                c += 1 ;
            }


        }

          int product = (a*b*c)  ;

            cout << product << endl;

    }

    return 0;
}

