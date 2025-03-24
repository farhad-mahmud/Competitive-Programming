#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

#define yes cout << "YES\n";
#define no cout << "NO\n";

const ll MOD = 1e9 + 7;
void solve ()
{
        
        
                int n , k ; cin >> n >>  k;
                string s ;
                cin >> s ;
               
                string rev_s = s ;

                reverse(rev_s.begin(),rev_s.end()) ; 

                if(k==0){

                        if(s < rev_s){

                               yes ;
                        }
                        else{

                             no ;
                        }
                        return ;
                }

                if(count(s.begin(),s.end(),s[0]) == n){

                            no ;
                            return ;
                }

            

               yes ;

        
}




int32_t main() {
ios_base:: sync_with_stdio(0);
cin.tie(0);

    int  t = 1 ;
    cin >> t;
    while (t--) {


            solve() ;


    }

    return 0;
}
