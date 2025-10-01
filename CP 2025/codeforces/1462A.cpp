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
                int b[n] ;
                for(int i=0;i<n;i++)
                {
                    cin >>b[i] ;
                }

                int a[n] ;
                for(int i=0;i<n;i++)
                {

                      if(i==0)
                      {
                          a[i] = b[i] ;
                      }
                      else if(i % 2 == 0)
                      {
                          a[i] = b[i] ;
                      }
                      else
                      {
                          a[n-1] = b[i] ;
                          n = n-1 ;

                      }

                }

                for(int i=0;i<n;i++)
                {
                    cout << a[i]  << " " ;
                }


    }

    return 0;
}

