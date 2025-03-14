#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const ll MOD = 1e9 + 7;

int main() {
    FAST_IO;

    int t;
    cin >> t;
    while (t--) {
                 int n ;
                 cin >> n ;
                 int a[n] ;
                 int sum = 0;
                 for(int i=0;i<n;i++)
                 {
                     cin >> a[i] ;
                   sum += a[i] ;
                 }

             int chris_evens =0,odds = 0 ;
                for(int i=0;i<n;i++)
                {
                     if (a[i] %2 ==1)
                     {
                         chris_evens ++ ;
                     }
                     else
                     {
                         odds++ ;
                     }
                }


                if(sum % 2==1)
                {
                    yes ;
                }
                else if (chris_evens > 0 && odds >0)
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

