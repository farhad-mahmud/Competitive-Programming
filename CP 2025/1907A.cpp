#include <bits/stdc++.h>

using namespace std;

#define int long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const int  MOD = 1e9 + 7;
void solve ()
{
        
                   string s ; cin >> s;

                  string al = "abcdefgh" ;

                  string num = "12345678" ;

                    
                    vector<string > s0, s1 ;

                    for(int i=0;i<8;i++){


                            if(s[0] != al[i]){

                               s0.push_back(string{al[i]}); ; // pushing a,b,c,d
                            }

                            if(s[1] != num[i]){

                                s1.push_back(string{num[i]}); ; // pushing 1,2,3
                            }
                    }


                

         for (auto x : s0) cout << x << s[1] << '\n'; // same row
    for (auto y : s1) cout << s[0] << y << '\n'; // same column
                
}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

    int t = 1 ;
    cin >> t;
    while (t--) {


            solve() ;


    }

    return 0;
}
