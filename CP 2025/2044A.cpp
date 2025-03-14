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

              vector <pair<int ,int >> v ;

              int cnt = 0 ;
              for(int i=1;i<n;i++)
              {
                  for(int j=1;j<n;j++)
                  {
                        if (i == (n-j))
                        {
                            v.push_back({i,j}) ;
                            cnt ++ ;
                        }
                  }
              }

           cout << cnt << endl;

    }

    return 0;
}

