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

             ll   n;
             cin >> n;
             int last_digit = 0;

             if(n==0)
             {
                 last_digit = 1 ;
             }
             else if(n % 4 ==1)
             {
                 last_digit = 8 ;
             }
             else if(n %4 ==2)
             {
                 last_digit = 4 ;
             }
             else if(n % 4 == 3)
             {
                 last_digit = 2 ;
             }
             else
             {
                 last_digit = 6 ;
             }

             cout <<last_digit << endl;

    return 0;
}

