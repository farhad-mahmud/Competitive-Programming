#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const ll MOD = 1e9 + 7;
int solve (int a, int b ,int c)
{
                    int  elevator1_time = (a-1) ;

                    int elevator2_time = abs(c-b) + (c - 1) ;

                    if(elevator1_time == elevator2_time)
                    {
                        return 3 ;
                    }
                    else if(elevator1_time > elevator2_time)
                    {
                        return  2;
                    }
                    else{
                        return 1 ;
                    }


}

int main() {
    FAST_IO;

    int t;
    cin >> t;
    while (t--) {

                       int a,b,c ;
                       cin >> a >> b >> c ;
                      int ans =  solve(a,b,c) ;

                  cout << ans << endl;

    }

    return 0;
}

